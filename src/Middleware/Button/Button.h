#ifndef __BUTTON_H_
#define __BUTTON_H_

#include "HAL/GPIO/gpio.h"

typedef enum 
{
ACTIVE_HIGH,
ACTIVE_LOW
}EN_Button_Mode_t;


typedef struct
{
 ST_PORT_PIN Portpin;
 EN_Button_Mode_t Mode;   

}ST_Button;

void Button_init(ST_Button Button);

EN_IO_STAT_t button_read (ST_Button button);

#endif  



