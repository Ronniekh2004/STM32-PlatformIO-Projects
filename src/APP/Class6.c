#include"Class5.h"

ST_LED LED_RED1 = {{EN_PORTA, 2}, LED_SWITCH_NORMAL};
ST_LED LED_GRN = {{EN_PORTC, 15}, LED_SWITCH_NORMAL};
ST_LED LED_BLU = {{EN_PORTC, 14}, LED_SWITCH_NORMAL};
ST_LED LED_YLW = {{EN_PORTC, 13}, LED_SWITCH_NORMAL};

ST_Button BUTTON_COL1 = {{EN_PORTB, 11}, ACTIVE_LOW};
ST_Button BUTTON_COL2 = {{EN_PORTB, 10}, ACTIVE_LOW};
ST_Button BUTTON_COL3 = {{EN_PORTB, 1}, ACTIVE_LOW};
ST_Button BUTTON_COL4 = {{EN_PORTB, 0}, ACTIVE_LOW};


void APP_Init(void) 
{
    LED_init(LED_RED1);
    Button_init(BUTTON_COL1);

        LED_init(LED_GRN);
    Button_init(BUTTON_COL2);

    LED_init(LED_BLU);
    Button_init(BUTTON_COL3);

        LED_init(LED_YLW);
    Button_init(BUTTON_COL4);
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

    if (button_read(BUTTON_COL2) == HIGH) 
    {
        LED_on(LED_GRN);
    } 

    else {
        LED_off(LED_GRN);
    }

        if (button_read(BUTTON_COL3) == HIGH) 
    {
        LED_on(LED_BLU);
    } 

    else {
        LED_off(LED_BLU);
    }

            if (button_read(BUTTON_COL4) == HIGH) 
    {
        LED_on(LED_YLW);
    } 

    else {
        LED_off(LED_YLW);
    }
}


void APP_Start(void) 
{
    APP_Init();
    while (1) {
        APP_Loop();
    }
}