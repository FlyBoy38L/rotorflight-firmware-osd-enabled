/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#if defined(STM32F405)
#define TARGET_BOARD_IDENTIFIER "S405"

#define USBD_PRODUCT_STRING     "Rotorflight STM32F405"

// Additional drivers included for targets with > 512KB of flash
#define USE_ACCGYRO_BMI270
#define USE_BARO_BMP085

#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 6)

#define USE_INVERTER

#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff

#define VOLTAGE_TASK_FREQ_HZ     100
#define CURRENT_TASK_FREQ_HZ     100
#define ESC_SENSOR_TASK_FREQ_HZ  100

#elif defined(STM32F411)
#define TARGET_BOARD_IDENTIFIER "S411"

#define USBD_PRODUCT_STRING     "Rotorflight STM32F411"

#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3

#define USE_UART1
#define USE_UART2
#define USE_UART6

#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 3)

#define USE_INVERTER

#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff

#define VOLTAGE_TASK_FREQ_HZ     100
#define CURRENT_TASK_FREQ_HZ     100
#define ESC_SENSOR_TASK_FREQ_HZ  100

#elif defined(STM32F7X2)
#define TARGET_BOARD_IDENTIFIER "S7X2"

#define USBD_PRODUCT_STRING     "Rotorflight STM32F7x2"

#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 6) 

#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff

#define VOLTAGE_TASK_FREQ_HZ     200
#define CURRENT_TASK_FREQ_HZ     200
#define ESC_SENSOR_TASK_FREQ_HZ  200

#elif defined(STM32F745)
#define TARGET_BOARD_IDENTIFIER "S745"

#define USBD_PRODUCT_STRING     "Rotorflight STM32F745"

// Additional drivers included for targets with > 512KB of flash
#define USE_ACCGYRO_BMI270
#define USE_BARO_BMP085

#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3
#define USE_I2C_DEVICE_4

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6
#define USE_UART7
#define USE_UART8

#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 8)

#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_SPI_DEVICE_4

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff

#define VOLTAGE_TASK_FREQ_HZ     200
#define CURRENT_TASK_FREQ_HZ     200
#define ESC_SENSOR_TASK_FREQ_HZ  200

#elif defined(STM32H743)
#define TARGET_BOARD_IDENTIFIER "SH74"

#define USBD_PRODUCT_STRING     "Rotorflight STM32H743"

#define USE_I2C_DEVICE_1
#define USE_I2C_DEVICE_2
#define USE_I2C_DEVICE_3
#define USE_I2C_DEVICE_4

#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6
#define USE_UART7
#define USE_UART8
#define USE_LPUART1

#define SERIAL_PORT_COUNT       (UNIFIED_SERIAL_PORT_COUNT + 9)

#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_SPI_DEVICE_4
#define USE_SPI_DEVICE_5
#define USE_SPI_DEVICE_6

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff
#define TARGET_IO_PORTG 0xffff

#define VOLTAGE_TASK_FREQ_HZ     250
#define CURRENT_TASK_FREQ_HZ     250
#define ESC_SENSOR_TASK_FREQ_HZ  250

#elif !defined(UNIT_TEST)

#error "No resources defined for this Unified Target."

#endif


// Treat the target as unified, and expect manufacturer id / board name
// to be supplied when the board is configured for the first time
#define USE_UNIFIED_TARGET

#define USE_BEEPER

// MPU interrupt
#define USE_EXTI
#define USE_MPU_DATA_READY_SIGNAL
#define USE_GYRO_EXTI

#define USE_ACC
#define USE_GYRO

#define USE_ACC_MPU6050
#define USE_GYRO_MPU6050
#define USE_ACC_MPU6500
#define USE_GYRO_MPU6500
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6500
#define USE_ACC_SPI_ICM20689
#define USE_GYRO_SPI_ICM20689

#define USE_MAG
#define USE_MAG_DATA_READY_SIGNAL
#define USE_MAG_HMC5883
#define USE_MAG_SPI_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_LIS3MDL
#define USE_MAG_AK8963
#define USE_MAG_SPI_AK8963
#define USE_MAG_AK8975

#define USE_BARO
#define USE_BARO_MS5611
#define USE_BARO_SPI_MS5611
#define USE_BARO_BMP280
#define USE_BARO_SPI_BMP280
#define USE_BARO_BMP388
#define USE_BARO_SPI_BMP388
#define USE_BARO_LPS
#define USE_BARO_SPI_LPS
#define USE_BARO_QMP6988
#define USE_BARO_SPI_QMP6988

#define USE_SDCARD
#define USE_SDCARD_SPI
#define USE_SDCARD_SDIO

#define USE_FLASHFS
#define USE_FLASH_TOOLS
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G          // 1Gb NAND flash support
#define USE_FLASH_W25M             // Stacked die support
#define USE_FLASH_W25M512          // 512Kb (256Kb x 2 stacked) NOR flash support
#define USE_FLASH_W25M02G          // 2Gb (1Gb x 2 stacked) NAND flash support

#define USE_MAX7456

#define USE_VTX_RTC6705
#define USE_VTX_RTC6705_SOFTSPI

#define USE_RANGEFINDER
#define USE_RANGEFINDER_HCSR04
#define USE_RANGEFINDER_TF

#define USE_SPI
#define SPI_FULL_RECONFIGURABILITY

#define USE_I2C
#define I2C_FULL_RECONFIGURABILITY

#define USE_VCP

#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define UNIFIED_SERIAL_PORT_COUNT       3

#define USE_USB_DETECT

#define USE_ESCSERIAL

#define USE_ADC

#define USE_FREQ_SENSOR

#define USE_CUSTOM_DEFAULTS

#define USE_RX_SPI
#define USE_RX_FRSKY_SPI_D
#define USE_RX_FRSKY_SPI_X
#define USE_RX_SFHSS_SPI
#define USE_RX_REDPINE_SPI
#define USE_RX_FRSKY_SPI_TELEMETRY
#define USE_RX_CC2500_SPI_PA_LNA
#define USE_RX_CC2500_SPI_DIVERSITY
#define USE_RX_FLYSKY
#define USE_RX_FLYSKY_SPI_LED

//#undef  USE_OSD
#undef  USE_CMS
//#undef  USE_MAX7456
#undef  USE_DASHBOARD
#undef  USE_RCDEVICE
#undef  USE_VTX_CONTROL
#undef  USE_CAMERA_CONTROL
#undef  USE_GYRO_DATA_ANALYSE

#undef USE_INTERPOLATED_SP

