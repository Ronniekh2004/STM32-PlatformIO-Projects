#include "Button.h"

void Button_init(ST_Button button)
{
    CONF_GPIO(button.Portpin,(ST_PORT_PIN_CONF) {INPUT,INPUT_FLOATING,OUT_SPEED_10MHZ});
    
}

 EN_IO_STAT_t button_read (ST_Button button)

{
     EN_IO_LEVEL_t buttonlevel = GPIO_INPUT_READ(button.Portpin);

if (button.Mode== ACTIVE_LOW && buttonlevel== LOW)
{
    return HIGH;

}
else if (button.Mode==ACTIVE_HIGH && buttonlevel== HIGH)
{
return HIGH;

}
    return LOW;
}
