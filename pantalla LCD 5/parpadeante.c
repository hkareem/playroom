#include  <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>

void main (void)
   {
      int8 cuenta = 0;
      lcd_init(); // es para decir que vas a utilizar las dos lineas del LCD entre otras cosas
      printf(lcd_putc"****\%u****",cuenta);
      
      while(1)
         {
         delay_ms(500);
         cuenta++;
         if(cuenta == 10)
            {
            cuenta = 0;
            }
            
            lcd_gotoxy(5,1);
            printf(lcd_putc, "%u", cuenta);
         
                  
        
            
         }
   }
   
 
