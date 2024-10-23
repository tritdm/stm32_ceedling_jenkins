/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STM32F1XX_HAL_GPIO_H
#define _MOCK_STM32F1XX_HAL_GPIO_H

#include "unity.h"
#include "stm32f1xx_hal_gpio.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_stm32f1xx_hal_gpio_Init(void);
void mock_stm32f1xx_hal_gpio_Destroy(void);
void mock_stm32f1xx_hal_gpio_Verify(void);




#define HAL_GPIO_Init_Ignore() HAL_GPIO_Init_CMockIgnore()
void HAL_GPIO_Init_CMockIgnore(void);
#define HAL_GPIO_Init_StopIgnore() HAL_GPIO_Init_CMockStopIgnore()
void HAL_GPIO_Init_CMockStopIgnore(void);
#define HAL_GPIO_Init_Expect(GPIOx, GPIO_Init) HAL_GPIO_Init_CMockExpect(__LINE__, GPIOx, GPIO_Init)
void HAL_GPIO_Init_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_Init);
typedef void (* CMOCK_HAL_GPIO_Init_CALLBACK)(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_Init, int cmock_num_calls);
void HAL_GPIO_Init_AddCallback(CMOCK_HAL_GPIO_Init_CALLBACK Callback);
void HAL_GPIO_Init_Stub(CMOCK_HAL_GPIO_Init_CALLBACK Callback);
#define HAL_GPIO_Init_StubWithCallback HAL_GPIO_Init_Stub
#define HAL_GPIO_DeInit_Ignore() HAL_GPIO_DeInit_CMockIgnore()
void HAL_GPIO_DeInit_CMockIgnore(void);
#define HAL_GPIO_DeInit_StopIgnore() HAL_GPIO_DeInit_CMockStopIgnore()
void HAL_GPIO_DeInit_CMockStopIgnore(void);
#define HAL_GPIO_DeInit_Expect(GPIOx, GPIO_Pin) HAL_GPIO_DeInit_CMockExpect(__LINE__, GPIOx, GPIO_Pin)
void HAL_GPIO_DeInit_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint32_t GPIO_Pin);
typedef void (* CMOCK_HAL_GPIO_DeInit_CALLBACK)(GPIO_TypeDef* GPIOx, uint32_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_DeInit_AddCallback(CMOCK_HAL_GPIO_DeInit_CALLBACK Callback);
void HAL_GPIO_DeInit_Stub(CMOCK_HAL_GPIO_DeInit_CALLBACK Callback);
#define HAL_GPIO_DeInit_StubWithCallback HAL_GPIO_DeInit_Stub
#define HAL_GPIO_ReadPin_IgnoreAndReturn(cmock_retval) HAL_GPIO_ReadPin_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GPIO_ReadPin_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, GPIO_PinState cmock_to_return);
#define HAL_GPIO_ReadPin_StopIgnore() HAL_GPIO_ReadPin_CMockStopIgnore()
void HAL_GPIO_ReadPin_CMockStopIgnore(void);
#define HAL_GPIO_ReadPin_ExpectAndReturn(GPIOx, GPIO_Pin, cmock_retval) HAL_GPIO_ReadPin_CMockExpectAndReturn(__LINE__, GPIOx, GPIO_Pin, cmock_retval)
void HAL_GPIO_ReadPin_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState cmock_to_return);
typedef GPIO_PinState (* CMOCK_HAL_GPIO_ReadPin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_ReadPin_AddCallback(CMOCK_HAL_GPIO_ReadPin_CALLBACK Callback);
void HAL_GPIO_ReadPin_Stub(CMOCK_HAL_GPIO_ReadPin_CALLBACK Callback);
#define HAL_GPIO_ReadPin_StubWithCallback HAL_GPIO_ReadPin_Stub
#define HAL_GPIO_WritePin_Ignore() HAL_GPIO_WritePin_CMockIgnore()
void HAL_GPIO_WritePin_CMockIgnore(void);
#define HAL_GPIO_WritePin_StopIgnore() HAL_GPIO_WritePin_CMockStopIgnore()
void HAL_GPIO_WritePin_CMockStopIgnore(void);
#define HAL_GPIO_WritePin_Expect(GPIOx, GPIO_Pin, PinState) HAL_GPIO_WritePin_CMockExpect(__LINE__, GPIOx, GPIO_Pin, PinState)
void HAL_GPIO_WritePin_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
typedef void (* CMOCK_HAL_GPIO_WritePin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState, int cmock_num_calls);
void HAL_GPIO_WritePin_AddCallback(CMOCK_HAL_GPIO_WritePin_CALLBACK Callback);
void HAL_GPIO_WritePin_Stub(CMOCK_HAL_GPIO_WritePin_CALLBACK Callback);
#define HAL_GPIO_WritePin_StubWithCallback HAL_GPIO_WritePin_Stub
#define HAL_GPIO_TogglePin_Ignore() HAL_GPIO_TogglePin_CMockIgnore()
void HAL_GPIO_TogglePin_CMockIgnore(void);
#define HAL_GPIO_TogglePin_StopIgnore() HAL_GPIO_TogglePin_CMockStopIgnore()
void HAL_GPIO_TogglePin_CMockStopIgnore(void);
#define HAL_GPIO_TogglePin_Expect(GPIOx, GPIO_Pin) HAL_GPIO_TogglePin_CMockExpect(__LINE__, GPIOx, GPIO_Pin)
void HAL_GPIO_TogglePin_CMockExpect(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
typedef void (* CMOCK_HAL_GPIO_TogglePin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_TogglePin_AddCallback(CMOCK_HAL_GPIO_TogglePin_CALLBACK Callback);
void HAL_GPIO_TogglePin_Stub(CMOCK_HAL_GPIO_TogglePin_CALLBACK Callback);
#define HAL_GPIO_TogglePin_StubWithCallback HAL_GPIO_TogglePin_Stub
#define HAL_GPIO_LockPin_IgnoreAndReturn(cmock_retval) HAL_GPIO_LockPin_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_GPIO_LockPin_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_GPIO_LockPin_StopIgnore() HAL_GPIO_LockPin_CMockStopIgnore()
void HAL_GPIO_LockPin_CMockStopIgnore(void);
#define HAL_GPIO_LockPin_ExpectAndReturn(GPIOx, GPIO_Pin, cmock_retval) HAL_GPIO_LockPin_CMockExpectAndReturn(__LINE__, GPIOx, GPIO_Pin, cmock_retval)
void HAL_GPIO_LockPin_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_GPIO_LockPin_CALLBACK)(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_LockPin_AddCallback(CMOCK_HAL_GPIO_LockPin_CALLBACK Callback);
void HAL_GPIO_LockPin_Stub(CMOCK_HAL_GPIO_LockPin_CALLBACK Callback);
#define HAL_GPIO_LockPin_StubWithCallback HAL_GPIO_LockPin_Stub
#define HAL_GPIO_EXTI_IRQHandler_Ignore() HAL_GPIO_EXTI_IRQHandler_CMockIgnore()
void HAL_GPIO_EXTI_IRQHandler_CMockIgnore(void);
#define HAL_GPIO_EXTI_IRQHandler_StopIgnore() HAL_GPIO_EXTI_IRQHandler_CMockStopIgnore()
void HAL_GPIO_EXTI_IRQHandler_CMockStopIgnore(void);
#define HAL_GPIO_EXTI_IRQHandler_Expect(GPIO_Pin) HAL_GPIO_EXTI_IRQHandler_CMockExpect(__LINE__, GPIO_Pin)
void HAL_GPIO_EXTI_IRQHandler_CMockExpect(UNITY_LINE_TYPE cmock_line, uint16_t GPIO_Pin);
typedef void (* CMOCK_HAL_GPIO_EXTI_IRQHandler_CALLBACK)(uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_EXTI_IRQHandler_AddCallback(CMOCK_HAL_GPIO_EXTI_IRQHandler_CALLBACK Callback);
void HAL_GPIO_EXTI_IRQHandler_Stub(CMOCK_HAL_GPIO_EXTI_IRQHandler_CALLBACK Callback);
#define HAL_GPIO_EXTI_IRQHandler_StubWithCallback HAL_GPIO_EXTI_IRQHandler_Stub
#define HAL_GPIO_EXTI_Callback_Ignore() HAL_GPIO_EXTI_Callback_CMockIgnore()
void HAL_GPIO_EXTI_Callback_CMockIgnore(void);
#define HAL_GPIO_EXTI_Callback_StopIgnore() HAL_GPIO_EXTI_Callback_CMockStopIgnore()
void HAL_GPIO_EXTI_Callback_CMockStopIgnore(void);
#define HAL_GPIO_EXTI_Callback_Expect(GPIO_Pin) HAL_GPIO_EXTI_Callback_CMockExpect(__LINE__, GPIO_Pin)
void HAL_GPIO_EXTI_Callback_CMockExpect(UNITY_LINE_TYPE cmock_line, uint16_t GPIO_Pin);
typedef void (* CMOCK_HAL_GPIO_EXTI_Callback_CALLBACK)(uint16_t GPIO_Pin, int cmock_num_calls);
void HAL_GPIO_EXTI_Callback_AddCallback(CMOCK_HAL_GPIO_EXTI_Callback_CALLBACK Callback);
void HAL_GPIO_EXTI_Callback_Stub(CMOCK_HAL_GPIO_EXTI_Callback_CALLBACK Callback);
#define HAL_GPIO_EXTI_Callback_StubWithCallback HAL_GPIO_EXTI_Callback_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
