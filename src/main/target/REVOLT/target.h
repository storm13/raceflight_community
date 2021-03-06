/* 
 * This file is part of RaceFlight. 
 * 
 * RaceFlight is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, or 
 * (at your option) any later version. 
 * 
 * RaceFlight is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public License 
 * along with RaceFlight.  If not, see <http://www.gnu.org/licenses/>.
 */ 
#pragma once 
       
#define TARGET_BOARD_IDENTIFIER "RVLT"
#define CONFIG_SERIALRX_PROVIDER 1
#define CONFIG_BLACKBOX_DEVICE 1
#define CONFIG_FEATURE_RX_SERIAL 
#define CONFIG_FEATURE_ONESHOT125 
#define CONFIG_MSP_PORT 2
#define CONFIG_RX_SERIAL_PORT 2
#define DEFAULT_MIXER MIXER_QUADXL_1234
#ifdef USE_BOOTLOADER
#define CONFIG_FLASH_SECTOR FLASH_Sector_4
#define CONFIG_START_FLASH_ADDRESS (0x08010000)
#define CONFIG_START_BACK_ADDRESS (0x08010000)
#define ADDRESS_BL_START (0x08000000)
#define ADDRESS_CONFIG_START (0x08010000)
#define ADDRESS_FLASH_START (0x08020000)
#define ADDRESS_FLASH_END (0x080FFFF0)
#else
#define CONFIG_FLASH_SECTOR FLASH_Sector_7
#define CONFIG_START_FLASH_ADDRESS (0x08060000)
#define CONFIG_START_BACK_ADDRESS (0x08060000)
#define ADDRESS_BL_START (0x08000000)
#define ADDRESS_CONFIG_START (0x08060000)
#define ADDRESS_FLASH_START (0x08000000)
#define ADDRESS_FLASH_END (0x080FFFF0)
#endif
#define USBD_PRODUCT_STRING "Revolt"
#define USBD_SERIALNUMBER_STRING "0x8020000"
#define ESC_HEX 
#define LED0 PB5
#define BEEPER PB4
#define INVERTER_USART USART1
#define MPU9250_CS_PIN PA4
#define MPU9250_SPI_INSTANCE SPI1
#define SLOW_SPI_DOWN 
#define ACC 
#define USE_ACC_MPU9250 
#define USE_ACC_SPI_MPU9250 
#define ACC_MPU9250_ALIGN CW0_DEG
#define GYRO 
#define USE_GYRO_MPU9250 
#define USE_GYRO_SPI_MPU9250 
#define GYRO_MPU9250_ALIGN CW0_DEG
#define FAKE_EXTI 
#define FE_TIM_IRQ TIM8_UP_TIM13_IRQn
#define FE_TIM TIM13
#define M25P16_CS_PIN PB3
#define M25P16_SPI_INSTANCE SPI3
#define USE_FLASHFS 
#define USE_FLASH_M25P16 
#define USABLE_TIMER_CHANNEL_COUNT 12
#define USE_VCP 
#define VBUS_SENSING_PIN PC5
#define USE_USART1 
#define USART1_RX_PIN PA10
#define USART1_TX_PIN PA9
#define USART1_AHB1_PERIPHERALS RCC_AHB1Periph_DMA2
#define USE_USART3 
#ifdef TELEM
#define SPEKTRUM_TELEM 
#define USART3_RX_PIN PB10
#define USART3_TX_PIN PB10
#else
#define USART3_TX_PIN PB10
#define USART3_RX_PIN PB11
#endif
#define USART3_AHB1_PERIPHERALS RCC_AHB1Periph_DMA1
#define USE_USART6 
#define USART6_RX_PIN PC7
#define USART6_TX_PIN PC6
#define USART6_AHB1_PERIPHERALS RCC_AHB1Periph_DMA2
#define SERIAL_PORT_COUNT 4
#define SPEKTRUM_BIND 
#define BIND_PORT GPIOB
#define BIND_PIN Pin_11
#define BIND_PORT2 GPIOC
#define BIND_PIN2 Pin_7
#define SERIALRX_DMA 
#ifdef SERIALRX_DMA
 #define USE_USART1_RX_DMA
 #define USE_USART3_RX_DMA
 #define USE_USART6_RX_DMA
#endif
#define ESC_1WIRE 
#define USE_SPI 
#define USE_SPI_DEVICE_1 
#define USE_SPI_DEVICE_3 
#define SPI3_NSS_PIN PB3
#define SPI3_SCK_PIN PC10
#define SPI3_MISO_PIN PC11
#define SPI3_MOSI_PIN PC12
#define USE_ADC 
#define CURRENT_METER_ADC_PIN PC1
#define CURRENT_METER_ADC_CHANNEL ADC_Channel_11
#define VBAT_ADC_PIN PC2
#define VBAT_ADC_CHANNEL ADC_Channel_12
#define RSSI_ADC_GPIO_PIN PA0
#define RSSI_ADC_CHANNEL ADC_Channel_0
#define SENSORS_SET (SENSOR_ACC)
#define WS2812_LED 
#define WS2812_LED_TIMER_CH1 
#define WS2812_LED_GPIO GPIOB
#define WS2812_LED_PIN GPIO_Pin_6
#define WS2812_LED_PINSOURCE GPIO_PinSource6
#define WS2812_LED_PERIPH RCC_AHB1Periph_GPIOB
#define WS2812_LED_TIM TIM4
#define WS2812_LED_TIM_AF GPIO_AF_TIM4
#define WS2812_LED_TIM_PERIPH RCC_APB1Periph_TIM4
#define WS2812_LED_DMA_CH DMA_Channel_2
#define WS2812_LED_DMA_ST DMA1_Stream0
#define WS2812_LED_DMA_IRQ DMA1_Stream0_IRQn
#define WS2812_LED_DMA_FLAG DMA_FLAG_TCIF0
#define WS2812_LED_DMA_IRQ_HANDLER DMA1_Stream0_IRQHandler
#define WS2812_LED_DMA_PERIPH RCC_AHB1Periph_DMA1
#define BLACKBOX 
#define TELEMETRY 
#define SERIAL_RX 
#define USE_SERVOS 
#define USE_CLI 
#define USE_QUATERNION 
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
