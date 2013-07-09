#include  <16f887.h>
#include <stdio.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>
int valorAnalogo;
float volt;

void main ()

   {
      set_tris_e(0xFF);
      SETUP_ADC_PORTS (sAN5);
      SET_ADC_CHANNEL(5);
      setup_adc(ADC_CLOCK_DIV_32);
      lcd_init();
      
      
      while (1)
     {
                  
        valorAnalogo = read_adc();
        volt = valorAnalogo*.0196078431352549; //multiplicar el valor de la resistencia variable por .019
        lcd_putc("\f");//limpiar la pantalla
        printf (lcd_putc, "%f",volt);//para imprimer un valor flotante en el LCD
        delay_ms(1000);
            
         }
   }
   
