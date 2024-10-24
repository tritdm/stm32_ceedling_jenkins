#include "unity.h"
#include "mock_stm32f1xx_hal.h"
#include "mock_stm32f1xx_hal_gpio.h"
#include "mock_stm32f1xx_hal_rcc.h"
#include "mock_stm32f1xx_hal_exti.h"

// Giả lập định nghĩa LED_GPIO_Port và LED_Pin
GPIO_TypeDef LED_GPIO_Port_Instance;  // Tạo giả lập cấu trúc GPIO
#define LED_GPIO_Port &LED_GPIO_Port_Instance
#define LED_Pin GPIO_PIN_5  // Giả sử chân pin của LED là chân số 5

void setUp(void) {
    // Initialize mocks before each test
    mock_stm32f1xx_hal_Init();
    mock_stm32f1xx_hal_gpio_Init();
}

void tearDown(void) {
    // Clean up mocks after each test
    mock_stm32f1xx_hal_Destroy();
    mock_stm32f1xx_hal_gpio_Destroy();
}

/* Mock SystemClock_Config */
void SystemClock_Config(void) {
    // Định nghĩa hàm giả lập để tránh lỗi
}

/* Mock MX_GPIO_Init */
void MX_GPIO_Init(void) {
    // Định nghĩa hàm giả lập để tránh lỗi
}

/* Test khởi tạo chính trong main */
void test_main_initialization(void) {
    // Kỳ vọng hàm HAL_Init được gọi và trả về HAL_OK
    HAL_Init_ExpectAndReturn(HAL_OK);
    
    // Kỳ vọng hàm cấu hình clock bị bỏ qua
    // Thay vì sử dụng Ignore, chúng ta có thể mock nó
    SystemClock_Config();

    // Kỳ vọng khởi tạo GPIO
    HAL_GPIO_Init_Expect(LED_GPIO_Port, NULL);  // Chỉ là mock, bạn có thể thay NULL bằng cấu trúc phù hợp

    // Gọi hàm main (tránh vòng lặp vô hạn)
    // Nếu muốn test toàn bộ main, bạn cần sửa logic trong main để không lặp vô hạn
    // hoặc chỉ test các hàm con như init_hardware().
}

/* Định nghĩa hàm toggle_led */
void toggle_led(void) {
    HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
    HAL_Delay(500);
    HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
    HAL_Delay(500);
}

/* Test LED toggling */
void test_toggle_led(void) {
    // HAL_GPIO_WritePin được gọi để set chân LED HIGH
    HAL_GPIO_WritePin_Expect(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);
    
    // HAL_Delay được gọi với giá trị 500 ms
    HAL_Delay_Expect(500);
    HAL_Delay_Expect(500);
    
    // HAL_GPIO_WritePin được gọi để set chân LED LOW
    HAL_GPIO_WritePin_Expect(LED_GPIO_Port, LED_Pin, GPIO_PIN_RESET);
    
    // HAL_Delay được gọi với giá trị 500 ms
    HAL_Delay_Expect(500);
    
    // Gọi hàm toggle_led
    toggle_led();
}
