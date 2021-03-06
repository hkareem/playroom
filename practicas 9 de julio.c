#include <16f887.h>
#FUSES INTRC_IO
#USE delay (clock=8000000)
#include <lcd.c>

void init();
int8 lee_microsw(void);
int lee_dato(void);
int procesa_dato(int d);
void despliega(int a);


void main(void)
{  
int dato, dato_procesado;
    init();
    
    while(1)
    {
        dato = lee_dato();
        dato_procesado = procesa_dato(dato);
        despliega(dato_procesado);
        delay_ms(500);
    
    }
}

void init(void)
{
   set_tris_c(0xff);
   set_tris_e(0xff);
   lcd_init();
}

int lee_dato(void)
 {  
    int valor;
    valor = input(PIN_C0);// este es el pin con el que queremos iniciar.
    valor+= (input(PIN_C1)*2);//valor+= input(PIN_C1) equivale a valor= valor + input(PIN_C1)
    valor+= (input(PIN_C2)*4);
    valor+= (input(PIN_C3)*8);
    valor+= (input(PIN_C4)*16);
    valor+= (input(PIN_C5)*32);
    valor+= (input(PIN_E1)*64);
    valor+= (input(PIN_E2)*128);
    
    return valor;
 }
 
int procesa_dato(int d)
 {
   int bits, j, b=0;
   
   for(j=0;j<8;j++)
   {
      bits = d & (1<<j);
      if(bits == 0)
      {
         b++;
      }
   }
   
   return b; 
 }
 
  void despliega(int a)
 {  
    lcd_putc("\f");
    lcd_putc("El # de 0 es:");
    printf(lcd_putc,"%u", a);
 }
