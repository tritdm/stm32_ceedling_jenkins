@echo off
setlocal enabledelayedexpansion

:: Thư mục build chứa kết quả test log của Ceedling
set TEST_LOG=build\artifacts\test\report.xml
set REPORT_XML=build\artifacts\test\junit_report.xml

:: Kiểm tra xem file TEST_LOG có tồn tại không
if not exist %TEST_LOG% (
    echo Test log file not found: %TEST_LOG%
    exit /b 1
)

:: Bắt đầu tạo file XML
echo ^<?xml version="1.0" encoding="UTF-8"?^> > %REPORT_XML%
echo ^<testsuites^> >> %REPORT_XML%
echo ^<testsuite name="Ceedling Test Suite"^> >> %REPORT_XML%

:: Đếm số test đã chạy
for /f "tokens=2" %%a in ('findstr "TESTED:" %TEST_LOG%') do set TESTED=%%a
for /f "tokens=2" %%a in ('findstr "PASSED:" %TEST_LOG%') do set PASSED=%%a
for /f "tokens=2" %%a in ('findstr "FAILED:" %TEST_LOG%') do set FAILED=%%a
for /f "tokens=2" %%a in ('findstr "IGNORED:" %TEST_LOG%') do set IGNORED=%%a

:: Thêm thông tin tổng số test
echo ^<testsuite tests="%TESTED%" failures="%FAILED%" skipped="%IGNORED%"^> >> %REPORT_XML%

:: Duyệt qua từng kết quả test trong log và ghi lại vào file XML
for /f "tokens=2,3" %%a in ('findstr /R "Test '" %TEST_LOG%') do (
    set TEST_NAME=%%a
    set STATUS=%%b
    if "!STATUS!"=="PASS" (
        echo ^<testcase classname="TestCases" name="!TEST_NAME!" /^> >> %REPORT_XML%
    ) else (
        echo ^<testcase classname="TestCases" name="!TEST_NAME!"^> >> %REPORT_XML%
        echo ^<failure message="!TEST_NAME! failed" /^> >> %REPORT_XML%
        echo ^</testcase^> >> %REPORT_XML%
    )
)

:: Kết thúc XML
echo ^</testsuite^> >> %REPORT_XML%
echo ^</testsuites^> >> %REPORT_XML%

echo JUnit report has been generated at %REPORT_XML%
