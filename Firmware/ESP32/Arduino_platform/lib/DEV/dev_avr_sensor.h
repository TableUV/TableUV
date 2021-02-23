/**
 * @file dev_avr_sensor.h
 * @author Jianxiang (Jack) Xu
 * @date 15 Feb 2021
 * @brief Device configure header files
 *
 * This document will contains device configure content
 */


#ifndef DEV_AVR_SENSOR_H
#define DEV_AVR_SENSOR_H
# ifdef __cplusplus
extern "C"{
# endif 

#include <stdint.h>

/////////////////////////////////
///////   DEFINITION     ////////
/////////////////////////////////
#define SENSOR_AVR_BAUD 115200

typedef enum{
    DEV_AVR_LEFT_COLLISION,
    DEV_AVR_RIGHT_COLLISION,
    DEV_AVR_LEFT_IR_1,
    DEV_AVR_RIGHT_IR_1,
    DEV_AVR_RIGHT_IR_2,
    DEV_AVR_FRONT_IR_1,
    DEV_AVR_FRONT_IR_2
} DEV_AVR_SENSOR_E;

///////////////////////////////////////
///////   PUBLIC PROTOTYPE    /////////
///////////////////////////////////////
void dev_avr_sensor_init(void);
void dev_avr_sensor_uart_update(void);
uint8_t dev_avr_sensor_uart_get(void);
uint8_t dev_avr_sensor_uart_read(void);

# ifdef __cplusplus  
}
# endif 
#endif //DEV_AVR_SENSOR_H