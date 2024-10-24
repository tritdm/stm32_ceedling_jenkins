#include "build/test/mocks/mock_stm32f1xx_hal_exti.h"
#include "build/test/mocks/mock_stm32f1xx_hal_rcc.h"
#include "build/test/mocks/mock_stm32f1xx_hal_gpio.h"
#include "build/test/mocks/mock_stm32f1xx_hal.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




GPIO_TypeDef LED_GPIO_Port_Instance;







void setUp(void) {



    mock_stm32f1xx_hal_Init();

    mock_stm32f1xx_hal_gpio_Init();

}



void tearDown(void) {



    mock_stm32f1xx_hal_Destroy();

    mock_stm32f1xx_hal_gpio_Destroy();

}





void SystemClock_Config(void) {



}





void MX_GPIO_Init(void) {



}





void test_main_initialization(void) {



    HAL_Init_CMockExpectAndReturn(37, HAL_OK);







    SystemClock_Config();





    HAL_GPIO_Init_CMockExpect(44, &LED_GPIO_Port_Instance, 

   ((void *)0)

   );









}





void toggle_led(void) {

    HAL_GPIO_WritePin(&LED_GPIO_Port_Instance, ((uint16_t)0x0020), GPIO_PIN_SET);

    HAL_Delay(500);

    HAL_GPIO_WritePin(&LED_GPIO_Port_Instance, ((uint16_t)0x0020), GPIO_PIN_RESET);

    HAL_Delay(500);

}





void test_toggle_led(void) {



    HAL_GPIO_WritePin_CMockExpect(62, &LED_GPIO_Port_Instance, ((uint16_t)0x0020), GPIO_PIN_SET);





    HAL_Delay_CMockExpect(65, 500);





    HAL_GPIO_WritePin_CMockExpect(68, &LED_GPIO_Port_Instance, ((uint16_t)0x0020), GPIO_PIN_RESET);





    HAL_Delay_CMockExpect(71, 500);





    toggle_led();

}
