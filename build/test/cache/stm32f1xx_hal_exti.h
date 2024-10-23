#include "Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal_def.h"
typedef enum

{

  HAL_EXTI_COMMON_CB_ID = 0x00U

} EXTI_CallbackIDTypeDef;









typedef struct

{

  uint32_t Line;

  void (* PendingCallback)(void);

} EXTI_HandleTypeDef;









typedef struct

{

  uint32_t Line;



  uint32_t Mode;



  uint32_t Trigger;



  uint32_t GPIOSel;





} EXTI_ConfigTypeDef;

HAL_StatusTypeDef HAL_EXTI_SetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);

HAL_StatusTypeDef HAL_EXTI_GetConfigLine(EXTI_HandleTypeDef *hexti, EXTI_ConfigTypeDef *pExtiConfig);

HAL_StatusTypeDef HAL_EXTI_ClearConfigLine(EXTI_HandleTypeDef *hexti);

HAL_StatusTypeDef HAL_EXTI_RegisterCallback(EXTI_HandleTypeDef *hexti, EXTI_CallbackIDTypeDef CallbackID, void (*pPendingCbfn)(void));

HAL_StatusTypeDef HAL_EXTI_GetHandle(EXTI_HandleTypeDef *hexti, uint32_t ExtiLine);

void HAL_EXTI_IRQHandler(EXTI_HandleTypeDef *hexti);

uint32_t HAL_EXTI_GetPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);

void HAL_EXTI_ClearPending(EXTI_HandleTypeDef *hexti, uint32_t Edge);

void HAL_EXTI_GenerateSWI(EXTI_HandleTypeDef *hexti);
