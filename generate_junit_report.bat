@echo off
setlocal enabledelayedexpansion

:: Kiểm tra xem thư mục build\artifacts\test có tồn tại không
if not exist build\artifacts\test (
    echo Creating directory build\artifacts\test
    mkdir build\artifacts\test
)

:: Thư mục build chứa kết quả test log của Ceedling
set TEST_LOG=build\artifacts\test\report.xml
set REPORT_XML=build\artifacts\test\junit_report.xml

:: Kiểm tra xem file TEST_LOG có tồn tại không
echo Checking if %TEST_LOG% exists...
dir %TEST_LOG%

if not exist %TEST_LOG% (
    echo Test log file not found: %TEST_LOG%
    exit /b 1
)

:: Bắt đầu tạo file XML
echo ^<?xml version="1.0" encoding="UTF-8"?^> > %REPORT_XML%
echo ^<testsuites^> >> %REPORT_XML%
echo ^<testsuite name="Ceedling Test Suite"^> >> %REPORT_XML%

:: Đếm số test đã chạy từ phần OVERALL TEST SUMMARY
for /f "tokens=2 delims=:" %%a in ('findstr "TESTED:" %TEST_LOG%') do set TESTED=%%a
for /f "tokens=2 delims=:" %%a in ('findstr "PASSED:" %TEST_LOG%') do set PASSED=%%a
for /f "tokens=2 delims=:" %%a in ('findstr "FAILED:" %TEST_LOG%') do set FAILED=%%a
for /f "tokens=2 delims=:" %%a in ('findstr "IGNORED:" %TEST_LOG%') do set IGNORED=%%a

:: Thêm thông tin tổng số test vào XML (loại bỏ dấu ":")
echo ^<testsuite tests="%TESTED%" failures="%FAILED%" skipped="%IGNORED%"^> >> %REPORT_XML%

:: Nếu có test nào thất bại thì ghi vào failure trong XML
if %FAILED% gtr 0 (
    echo ^<testcase classname="Summary" name="Overall Test Summary"^> >> %REPORT_XML%
    echo ^<failure message="Some tests failed" /^> >> %REPORT_XML%
    echo ^</testcase^> >> %REPORT_XML%
) else (
    echo ^<testcase classname="Summary" name="Overall Test Summary" /^> >> %REPORT_XML%
)

:: Kết thúc XML
echo ^</testsuite^> >> %REPORT_XML%
echo ^</testsuites^> >> %REPORT_XML%

echo JUnit report has been generated at %REPORT_XML%
