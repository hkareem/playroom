#include <16f887.h>
#use delay (clock=8000000)
#BYTE puertoA=0x05
#int_timer0

void timer_isr(void)
{
   puertoA = puertoA ^ (1<<3);
   set_timer0(127);
}

void main (void)
{
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256);
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   
   set_timer0(127);

    while(1)
   {
      delay_ms(200);
      puertoA = puertoA ^ (1<<5);
   } 
}
