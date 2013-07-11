#include <16f887.h>
#use delay (clock=8000000)
#include "timers.c"
#include "bsp.c"



void main(void)
{ 
  int sw;
  bsp_init();
  timers_init(); 
  enable_interrupts(GLOBAL);
  
  timers_set_time(1,_500ms);
  
   
      while(1)
      {
        if(timers_get_time(1)==0)
        {
           timers_set_time(1,_500ms);
           bsp_led_inv(4);
        }
      
      }
}




