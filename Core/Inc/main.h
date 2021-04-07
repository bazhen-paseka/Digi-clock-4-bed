/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define DS3231_ALARM_Pin GPIO_PIN_0
#define DS3231_ALARM_GPIO_Port GPIOA
#define DS3231_ALARM_EXTI_IRQn EXTI0_IRQn
#define BEEPER_1_Pin GPIO_PIN_4
#define BEEPER_1_GPIO_Port GPIOA
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_0
#define LED_RED_GPIO_Port GPIOB
#define BUTTON_1_Pin GPIO_PIN_1
#define BUTTON_1_GPIO_Port GPIOB
#define BUTTON_1_EXTI_IRQn EXTI1_IRQn
#define BUTTON_2_Pin GPIO_PIN_2
#define BUTTON_2_GPIO_Port GPIOB
#define BUTTON_2_EXTI_IRQn EXTI2_IRQn
#define BUTTON_3_Pin GPIO_PIN_3
#define BUTTON_3_GPIO_Port GPIOB
#define BUTTON_3_EXTI_IRQn EXTI3_IRQn
#define BUTTON_4_Pin GPIO_PIN_4
#define BUTTON_4_GPIO_Port GPIOB
#define BUTTON_4_EXTI_IRQn EXTI4_IRQn
#define BUTTON_5_Pin GPIO_PIN_5
#define BUTTON_5_GPIO_Port GPIOB
#define BUTTON_5_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_6_Pin GPIO_PIN_8
#define BUTTON_6_GPIO_Port GPIOB
#define BUTTON_6_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
