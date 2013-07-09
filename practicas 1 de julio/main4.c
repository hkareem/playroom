#include <16f887.h>
#fuses INTRC_IO
#use delay (clock=8000000)
#include <lcd.c>

int8 lee_microsw(void);
int i = 0;
int imprime_decimal;
int imprime_hexadecimal;
int imprime_binario;


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
           imprime_decimal(leds);
           imprime_hexadecimal(leds);
           imprime_binario(leds);           
           delay_ms(200);
       }
   }
     
   int8 lee_microsw(void)
   {
      int8 entrada [8];
      int8 valor = 0;
      
      entrada[0] = input(PIN_C0);
      entrada[1] = input(PIN_C1);
      entrada[2] = input(PIN_C2);
      entrada[3] = input(PIN_C3);
      entrada[4] = input(PIN_C4);
      entrada[5] = input(PIN_C5);
      entrada[6] = input(PIN_E1);
      entrada[7] = input(PIN_E2);
      
      valor = 0;
       for(i=0;i<8;i++)
       {
        
         valor+= (entrada[i] << i);
       
       }
     
      return valor;
    
   }
   
   void imprime_decimal(int8 cifra);
   
      {
     
      lcd_gotoxy(1,1);
      printf(lcd_putc,"%u", cifra);
      delay_ms(500);
      }
      
   void imprime_hexadecimal(int8 cifra);
   
   {
      lcd_gotoxy(1,2); 
      printf(lcd_putc,"%x",cifra);
      delay_ms(500);
   }
   
   int imprime_binario(int8 cifra);
      {
          lcd_gotoxy(5,1);
          printf(lcd_putc,"valores:%u%u%u%u%u%u%u%u",entrada[0],entrada[0],entrada[0],entrada[0],entrada[0],entrada[0],entrada[0],entrada[0]);
          delay_ms(500);
      }
