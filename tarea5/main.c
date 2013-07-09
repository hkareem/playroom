#include <16f887.h>
#fuses INTRC_IO
#use delay(clock=8000000)
#include <lcd.c>
int16 num;
int16 num2=1;
int16 sum;// este 16 en el int aumenta la capacidad de los bit de 8 a 16
int16 valorAnalogo;
void main()


   {
      lcd_init();
      set_tris_e(0xFF);
      SETUP_ADC_PORTS (sAN5);
      SET_ADC_CHANNEL(5);
      setup_adc(ADC_CLOCK_DIV_32);
      lcd_init();
      
      
      while (1)
     {
                  
        valorAnalogo = read_adc();
        lcd_putc("\f");//limpiar la pantalla
        printf(lcd_putc,"****************");
  
        delay_ms(1000);
            
         }
   }
