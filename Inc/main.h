/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/


#define blueRGB_Pin GPIO_PIN_13
#define blueRGB_GPIO_Port GPIOC
#define redRGB_Pin GPIO_PIN_14
#define redRGB_GPIO_Port GPIOC
#define greenRGB_Pin GPIO_PIN_15
#define greenRGB_GPIO_Port GPIOC
#define status_3G_Pin GPIO_PIN_1
#define status_3G_GPIO_Port GPIOC
#define netlight_3G_Pin GPIO_PIN_2
#define netlight_3G_GPIO_Port GPIOC
#define toGNSS_Pin GPIO_PIN_2
#define toGNSS_GPIO_Port GPIOA
#define fromGNSS_Pin GPIO_PIN_3
#define fromGNSS_GPIO_Port GPIOA
#define to3G_Pin GPIO_PIN_6
#define to3G_GPIO_Port GPIOC
#define from3G_Pin GPIO_PIN_7
#define from3G_GPIO_Port GPIOC
#define txDBG_3G_Pin GPIO_PIN_8
#define txDBG_3G_GPIO_Port GPIOA
#define emerg_3G_Pin GPIO_PIN_11
#define emerg_3G_GPIO_Port GPIOA
#define pwrKey_3G_Pin GPIO_PIN_12
#define pwrKey_3G_GPIO_Port GPIOA
#define rxDBG_3G_Pin GPIO_PIN_15
#define rxDBG_3G_GPIO_Port GPIOA


#define PWRKEY_Pin pwrKey_3G_Pin
#define PWRKEY_GPIO_Port pwrKey_3G_GPIO_Port
#define EMERG_Pin emerg_3G_Pin
#define EMERG_GPIO_Port emerg_3G_GPIO_Port
#define STATUSPINM95_Pin status_3G_Pin
#define STATUSPINM95_GPIO_Port status_3G_GPIO_Port

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
