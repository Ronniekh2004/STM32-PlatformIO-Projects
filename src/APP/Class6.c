#include"Class5.h"

ST_LED LED_RED1 = {{EN_PORTA, 2}, LED_SWITCH_NORMAL};
ST_Button BUTTON_COL1 = {{EN_PORTB, 11}, ACTIVE_LOW};

void APP_Init(void) 
{
    LED_init(LED_RED1);
    Button_init(BUTTON_COL1);
}

void APP_Loop(void)
 {
    if (button_read(BUTTON_COL1) == HIGH) 
    {
        LED_on(LED_RED1);
    } 

    else {
        LED_off(LED_RED1);
    }
}

void APP_Start(void) {
    APP_Init();
    while (1) {
        APP_Loop();
    }
}