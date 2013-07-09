#include <pic16f887>
#fuses INTRC_IO
#use delay (clock=800000)
#include <lcd.c>
int  pulsos;

void main () 

 
 {
     lcd_init();
     lcd_putc("0123456789");
     
     while(1)
      {
      
      }
     
 }
     
   
   
  
