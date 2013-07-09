#include <pic16f88>
#fuses INTRC_IO
#use delay (clock=8000000)
int a=0;



void main
   {
      lcd_init();

      for (a=0;a<10;a++)
         {
           printf(lcd_putc,"%u",a);
         }
     while(1)
       {   
      
        }
   }
