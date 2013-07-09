#include <16f887.h>
#use delay(clock=8000000)


#int_timer0
void timer_isr()
{
   
}

void main(void)
{
     setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256);
     enable_interrupts(INT_TIMER0);
     enable_interrupts(GLOBAL);
     
     
      set_timer0(127);// para que el reloj interno comienza desde la mitad y asi solo cuente la mitad
     while(1)
     {
      
      
     }
     
}

