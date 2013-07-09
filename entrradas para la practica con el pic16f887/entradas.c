#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>

void main()
   {
   
    set_tris_c(0b00000001);
    set_tris_a(0);
    lcd_init();
    
    while(1)
      {
       
        if(input(PIN_C0)==1)
        
               {
                  output_a(1);
                  printf(lcd_putc,"%u",PIN_C0);
               }
               lcd_putc("\f");
                  else
                     {
                     
                       output_a(0);
                       printf(lcd_putc,"%u",PIN_C0);
               }
                 lcd_putc("\f");
      }
   }
