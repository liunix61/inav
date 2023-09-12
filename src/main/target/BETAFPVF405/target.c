/*
 * This file is part of INAV.
 *
 * INAV is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * INAV is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with INAV.  If not, see <http://www.gnu.org/licenses/>.
 *
 * This target has been autgenerated by bf2inav.py
 */

#include <stdint.h>

#include "platform.h"

#include "drivers/bus.h"
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/pinio.h"
//#include "drivers/sensor.h"

//BUSDEV_REGISTER_SPI_TAG(busdev_bmi270,  DEVHW_BMI270,  BMI270_SPI_BUS,   BMI270_CS_PIN,   NONE,   0,  DEVFLAGS_NONE,  IMU_BMI270_ALIGN);
//BUSDEV_REGISTER_SPI_TAG(busdev_mpu6000,  DEVHW_MPU6000,  MPU6000_SPI_BUS,   MPU6000_CS_PIN,   NONE,   0,  DEVFLAGS_NONE,  IMU_MPU6000_ALIGN);

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM3, CH3, PB0, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM3, CH4, PB1, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM2, CH4, PA3, TIM_USE_MOTOR, 0, 1),
    DEF_TIM(TIM2, CH3, PA2, TIM_USE_MOTOR, 0, 0),
    DEF_TIM(TIM4, CH1, PB6, TIM_USE_LED, 0, 0),

};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
