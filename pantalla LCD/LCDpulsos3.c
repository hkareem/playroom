#include  <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>

void main (void)
   {
      int8 pulsos = 45;
      lcd_init(); // es para decir que vas a utilizar las dos lineas del LCD entre otras cosas
      printf(lcd_putc, "%u", pulsos);
      while(1)
         {
            
         }
   }
