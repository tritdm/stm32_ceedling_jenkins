/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_STM32F1XX_HAL_EXTI_H
#define _MOCK_STM32F1XX_HAL_EXTI_H

#include "unity.h"
#include "stm32f1xx_hal_exti.h"

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

void mock_stm32f1xx_hal_exti_Init(void);
void mock_stm32f1xx_hal_exti_Destroy(void);
void mock_stm32f1xx_hal_exti_Verify(void);


typedef void(*cmock_stm32f1xx_hal_exti_func_ptr1)(void);


#define HAL_EXTI_SetConfigLine_IgnoreAndReturn(cmock_retval) HAL_EXTI_SetConfigLine_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_SetConfigLine_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_EXTI_SetConfigLine_StopIgnore() HAL_EXTI_SetConfigLine_CMockStopIgnore()
void HAL_EXTI_SetConfigLine_CMockStopIgnore(void);
#define HAL_EXTI_SetConfigLine_ExpectAndReturn(hexti, pExtiConfig, cmock_retval) HAL_EXTI_SetConfigLine_CMockExpectAndReturn(__LINE__, hexti, pExtiConfig, cmock_retval)
void HAL_EXTI_SetConfigLine_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, EXTI_ConfigTypeDef* pExtiConfig, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_EXTI_SetConfigLine_CALLBACK)(EXTI_HandleTypeDef* hexti, EXTI_ConfigTypeDef* pExtiConfig, int cmock_num_calls);
void HAL_EXTI_SetConfigLine_AddCallback(CMOCK_HAL_EXTI_SetConfigLine_CALLBACK Callback);
void HAL_EXTI_SetConfigLine_Stub(CMOCK_HAL_EXTI_SetConfigLine_CALLBACK Callback);
#define HAL_EXTI_SetConfigLine_StubWithCallback HAL_EXTI_SetConfigLine_Stub
#define HAL_EXTI_GetConfigLine_IgnoreAndReturn(cmock_retval) HAL_EXTI_GetConfigLine_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_GetConfigLine_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_EXTI_GetConfigLine_StopIgnore() HAL_EXTI_GetConfigLine_CMockStopIgnore()
void HAL_EXTI_GetConfigLine_CMockStopIgnore(void);
#define HAL_EXTI_GetConfigLine_ExpectAndReturn(hexti, pExtiConfig, cmock_retval) HAL_EXTI_GetConfigLine_CMockExpectAndReturn(__LINE__, hexti, pExtiConfig, cmock_retval)
void HAL_EXTI_GetConfigLine_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, EXTI_ConfigTypeDef* pExtiConfig, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_EXTI_GetConfigLine_CALLBACK)(EXTI_HandleTypeDef* hexti, EXTI_ConfigTypeDef* pExtiConfig, int cmock_num_calls);
void HAL_EXTI_GetConfigLine_AddCallback(CMOCK_HAL_EXTI_GetConfigLine_CALLBACK Callback);
void HAL_EXTI_GetConfigLine_Stub(CMOCK_HAL_EXTI_GetConfigLine_CALLBACK Callback);
#define HAL_EXTI_GetConfigLine_StubWithCallback HAL_EXTI_GetConfigLine_Stub
#define HAL_EXTI_ClearConfigLine_IgnoreAndReturn(cmock_retval) HAL_EXTI_ClearConfigLine_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_ClearConfigLine_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_EXTI_ClearConfigLine_StopIgnore() HAL_EXTI_ClearConfigLine_CMockStopIgnore()
void HAL_EXTI_ClearConfigLine_CMockStopIgnore(void);
#define HAL_EXTI_ClearConfigLine_ExpectAndReturn(hexti, cmock_retval) HAL_EXTI_ClearConfigLine_CMockExpectAndReturn(__LINE__, hexti, cmock_retval)
void HAL_EXTI_ClearConfigLine_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_EXTI_ClearConfigLine_CALLBACK)(EXTI_HandleTypeDef* hexti, int cmock_num_calls);
void HAL_EXTI_ClearConfigLine_AddCallback(CMOCK_HAL_EXTI_ClearConfigLine_CALLBACK Callback);
void HAL_EXTI_ClearConfigLine_Stub(CMOCK_HAL_EXTI_ClearConfigLine_CALLBACK Callback);
#define HAL_EXTI_ClearConfigLine_StubWithCallback HAL_EXTI_ClearConfigLine_Stub
#define HAL_EXTI_RegisterCallback_IgnoreAndReturn(cmock_retval) HAL_EXTI_RegisterCallback_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_RegisterCallback_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_EXTI_RegisterCallback_StopIgnore() HAL_EXTI_RegisterCallback_CMockStopIgnore()
void HAL_EXTI_RegisterCallback_CMockStopIgnore(void);
#define HAL_EXTI_RegisterCallback_ExpectAndReturn(hexti, CallbackID, pPendingCbfn, cmock_retval) HAL_EXTI_RegisterCallback_CMockExpectAndReturn(__LINE__, hexti, CallbackID, pPendingCbfn, cmock_retval)
void HAL_EXTI_RegisterCallback_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, EXTI_CallbackIDTypeDef CallbackID, cmock_stm32f1xx_hal_exti_func_ptr1 pPendingCbfn, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_EXTI_RegisterCallback_CALLBACK)(EXTI_HandleTypeDef* hexti, EXTI_CallbackIDTypeDef CallbackID, cmock_stm32f1xx_hal_exti_func_ptr1 pPendingCbfn, int cmock_num_calls);
void HAL_EXTI_RegisterCallback_AddCallback(CMOCK_HAL_EXTI_RegisterCallback_CALLBACK Callback);
void HAL_EXTI_RegisterCallback_Stub(CMOCK_HAL_EXTI_RegisterCallback_CALLBACK Callback);
#define HAL_EXTI_RegisterCallback_StubWithCallback HAL_EXTI_RegisterCallback_Stub
#define HAL_EXTI_GetHandle_IgnoreAndReturn(cmock_retval) HAL_EXTI_GetHandle_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_GetHandle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, HAL_StatusTypeDef cmock_to_return);
#define HAL_EXTI_GetHandle_StopIgnore() HAL_EXTI_GetHandle_CMockStopIgnore()
void HAL_EXTI_GetHandle_CMockStopIgnore(void);
#define HAL_EXTI_GetHandle_ExpectAndReturn(hexti, ExtiLine, cmock_retval) HAL_EXTI_GetHandle_CMockExpectAndReturn(__LINE__, hexti, ExtiLine, cmock_retval)
void HAL_EXTI_GetHandle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, uint32_t ExtiLine, HAL_StatusTypeDef cmock_to_return);
typedef HAL_StatusTypeDef (* CMOCK_HAL_EXTI_GetHandle_CALLBACK)(EXTI_HandleTypeDef* hexti, uint32_t ExtiLine, int cmock_num_calls);
void HAL_EXTI_GetHandle_AddCallback(CMOCK_HAL_EXTI_GetHandle_CALLBACK Callback);
void HAL_EXTI_GetHandle_Stub(CMOCK_HAL_EXTI_GetHandle_CALLBACK Callback);
#define HAL_EXTI_GetHandle_StubWithCallback HAL_EXTI_GetHandle_Stub
#define HAL_EXTI_IRQHandler_Ignore() HAL_EXTI_IRQHandler_CMockIgnore()
void HAL_EXTI_IRQHandler_CMockIgnore(void);
#define HAL_EXTI_IRQHandler_StopIgnore() HAL_EXTI_IRQHandler_CMockStopIgnore()
void HAL_EXTI_IRQHandler_CMockStopIgnore(void);
#define HAL_EXTI_IRQHandler_Expect(hexti) HAL_EXTI_IRQHandler_CMockExpect(__LINE__, hexti)
void HAL_EXTI_IRQHandler_CMockExpect(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti);
typedef void (* CMOCK_HAL_EXTI_IRQHandler_CALLBACK)(EXTI_HandleTypeDef* hexti, int cmock_num_calls);
void HAL_EXTI_IRQHandler_AddCallback(CMOCK_HAL_EXTI_IRQHandler_CALLBACK Callback);
void HAL_EXTI_IRQHandler_Stub(CMOCK_HAL_EXTI_IRQHandler_CALLBACK Callback);
#define HAL_EXTI_IRQHandler_StubWithCallback HAL_EXTI_IRQHandler_Stub
#define HAL_EXTI_GetPending_IgnoreAndReturn(cmock_retval) HAL_EXTI_GetPending_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void HAL_EXTI_GetPending_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t cmock_to_return);
#define HAL_EXTI_GetPending_StopIgnore() HAL_EXTI_GetPending_CMockStopIgnore()
void HAL_EXTI_GetPending_CMockStopIgnore(void);
#define HAL_EXTI_GetPending_ExpectAndReturn(hexti, Edge, cmock_retval) HAL_EXTI_GetPending_CMockExpectAndReturn(__LINE__, hexti, Edge, cmock_retval)
void HAL_EXTI_GetPending_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, uint32_t Edge, uint32_t cmock_to_return);
typedef uint32_t (* CMOCK_HAL_EXTI_GetPending_CALLBACK)(EXTI_HandleTypeDef* hexti, uint32_t Edge, int cmock_num_calls);
void HAL_EXTI_GetPending_AddCallback(CMOCK_HAL_EXTI_GetPending_CALLBACK Callback);
void HAL_EXTI_GetPending_Stub(CMOCK_HAL_EXTI_GetPending_CALLBACK Callback);
#define HAL_EXTI_GetPending_StubWithCallback HAL_EXTI_GetPending_Stub
#define HAL_EXTI_ClearPending_Ignore() HAL_EXTI_ClearPending_CMockIgnore()
void HAL_EXTI_ClearPending_CMockIgnore(void);
#define HAL_EXTI_ClearPending_StopIgnore() HAL_EXTI_ClearPending_CMockStopIgnore()
void HAL_EXTI_ClearPending_CMockStopIgnore(void);
#define HAL_EXTI_ClearPending_Expect(hexti, Edge) HAL_EXTI_ClearPending_CMockExpect(__LINE__, hexti, Edge)
void HAL_EXTI_ClearPending_CMockExpect(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti, uint32_t Edge);
typedef void (* CMOCK_HAL_EXTI_ClearPending_CALLBACK)(EXTI_HandleTypeDef* hexti, uint32_t Edge, int cmock_num_calls);
void HAL_EXTI_ClearPending_AddCallback(CMOCK_HAL_EXTI_ClearPending_CALLBACK Callback);
void HAL_EXTI_ClearPending_Stub(CMOCK_HAL_EXTI_ClearPending_CALLBACK Callback);
#define HAL_EXTI_ClearPending_StubWithCallback HAL_EXTI_ClearPending_Stub
#define HAL_EXTI_GenerateSWI_Ignore() HAL_EXTI_GenerateSWI_CMockIgnore()
void HAL_EXTI_GenerateSWI_CMockIgnore(void);
#define HAL_EXTI_GenerateSWI_StopIgnore() HAL_EXTI_GenerateSWI_CMockStopIgnore()
void HAL_EXTI_GenerateSWI_CMockStopIgnore(void);
#define HAL_EXTI_GenerateSWI_Expect(hexti) HAL_EXTI_GenerateSWI_CMockExpect(__LINE__, hexti)
void HAL_EXTI_GenerateSWI_CMockExpect(UNITY_LINE_TYPE cmock_line, EXTI_HandleTypeDef* hexti);
typedef void (* CMOCK_HAL_EXTI_GenerateSWI_CALLBACK)(EXTI_HandleTypeDef* hexti, int cmock_num_calls);
void HAL_EXTI_GenerateSWI_AddCallback(CMOCK_HAL_EXTI_GenerateSWI_CALLBACK Callback);
void HAL_EXTI_GenerateSWI_Stub(CMOCK_HAL_EXTI_GenerateSWI_CALLBACK Callback);
#define HAL_EXTI_GenerateSWI_StubWithCallback HAL_EXTI_GenerateSWI_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif