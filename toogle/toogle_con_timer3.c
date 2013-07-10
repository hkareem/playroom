#include <16f887.h>
#use delay (clock=8000000)
#BYTE puertoA=0x05


int timers[10] = {0,0,0,0,0,0,0,0,0,0};
int n_timers = 10;
void proceso1(void);
void proceso2(void);
void proceso3(void);


#int_timer0
void timer_isr(void)
{
   
   set_timer0(178);//esto ocurre cada 10ms
   while(n_timers)
   {
      n_timers--;
      if (timers[n_timers]!= 0)
      {
        timers[n_timers]--;
      }
   }
   n_timers = 10;
}

void main (void)
{
   puertoA=0;
   set_tris_a(0x00);
   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_256);
   enable_interrupts(INT_TIMER0);
   enable_interrupts(GLOBAL);
   
   set_timer0(178);
   
   timers[2] =10 ;
   timers[1] =20 ;
   timers[3] =30 ;

    while(1)
   {
     proceso1();
     proceso2();
   } 
}

void proceso1(void)
{
   if ( timers[2] == 0)
      {
         puertoA = puertoA ^ (1<<5);
          timers[2] =10 ;
      }
}


void proceso2(void)
{
    if ( timers[1] == 0)
      {
         puertoA = puertoA ^ (1<<7);
          timers[1] =20 ;
      }
}

void proceso3(void)
{
    if ( timers[1] == 0)
      {
         puertoA = puertoA ^ (1<<8);
          timers[1] =30 ;
      }
}
