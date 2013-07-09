#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)

int8 lee_microsw(void);

void main(void)
   {
       int8 leds;
       set_tris_c(0xff);
       set_tris_e(0xff);
       set_tris_a(0);
       
      
       while(1)
       
       {
           leds = lee_microsw();
           output_a(leds);
           delay_ms(200);
       }
   }
     
   int8 lee_microsw(void)
   {
      int8 entrada0, entrada1, entrada2, entrada3, entrada4, entrada5, entrada6, entrada7;
      int8 valor;
      
      entrada0 = input(PIN_C0);
      entrada1 = input(PIN_C1);
      entrada2 = input(PIN_C2);
      entrada3 = input(PIN_C3);
      entrada4 = input(PIN_C4);
      entrada5 = input(PIN_C5);
      entrada6 = input(PIN_E1);
      entrada7 = input(PIN_E2);
      
      
      valor = entrada0 * 1;
      valor +=(entrada1 *2);
      valor +=(entrada2 *4);
      valor +=(entrada3 *8);
      valor +=(entrada4 *16);
      valor +=(entrada5 *32);
      valor +=(entrada6 *64);
      valor +=(entrada7 *128);
    
      return valor;
    
   }
