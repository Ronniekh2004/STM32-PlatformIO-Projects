
#include "main.h"

int main(void)
{
APP_Start();
return 0;
}

// # include <libopencm3/stm32/rcc.h>
// #include <libopencm3/stm32/gpio.h> 

// void delay (void )
// {
// for ( int i=0 ; i<800000 ;i++ )
// {
//     __asm__("nop");

// }

// }
// int main(void )
// {
//     rcc_periph_clock_enable(RCC_GPIOC);

//     gpio_set_mode(GPIOC,GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL,GPIO13);
//     gpio_set_mode(GPIOC,GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL,GPIO14);
//     gpio_set_mode(GPIOC,GPIO_MODE_OUTPUT_2_MHZ, GPIO_CNF_OUTPUT_PUSHPULL,GPIO15);

//     while(1){
//         gpio_toggle(GPIOC,GPIO13);
//         delay();
//         gpio_toggle(GPIOC,GPIO14);
//         delay ();        
//         gpio_toggle(GPIOC,GPIO15);        
//         delay();

//     }
// return 0;

// }





























