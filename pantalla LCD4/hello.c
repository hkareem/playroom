#include  <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>

void main (void)
   {
      int8 i,j;
      lcd_init(); // es para decir que vas a utilizar las dos lineas del LCD entre otras cosas
      while(1)
         {
             for(i=1;i<=2;i++)
             
               {
               
               for(j=1;j<=16;j++)
               
                  {
                  
                  lcd_gotoxy(j,i);
                  lcd_putc("hello");
                  delay_ms(200);
                  lcd_putc("\f);
                  }
        
            
         }
   }
   
 }
