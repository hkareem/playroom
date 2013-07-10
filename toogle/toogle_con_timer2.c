#include <16f887.h>
#use delay (clock=8000000)
#BYTE puertoA=0x05


int count = 0;
#int_timer0
void timer_isr(void)
{
   
   set_timer0(178);
   count++;
}

void main (void)
{
   set_tris_a(0xff);
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256);
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   
   set_timer0(178);

    while(1)
   {
      if (count == 10)
      {
         puertoA = puertoA ^ (1<<5);
         count = 0;
      }
   } 
}
