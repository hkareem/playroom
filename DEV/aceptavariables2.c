#include <stdio.h>

unsigned char par_impar(unsigned char x);
unsigned char cuenta_bits(unsigned char x);

int main(void)
{   
    int a,b;
    printf("ingrese un numero del 0 al 255\n");
    scanf ("%d", &b);
    a = cuenta_bits(b);
    printf("el numero de 1s es: %d",a);
    a = par_impar(a);
    if(a)
    {
          printf("ademas es par\n");
    }
    else
    {
         printf("ademas es impar\n");
    }
    
  
    system("PAUSE");
}

unsigned char par_impar(unsigned char x)
{
         if((x%2)==0)
         {
                      return 1;
         }
         else
         {
             return 0;
         }
}

unsigned char cuenta_bits(unsigned char x)
{
         int a,i, peso=1;
         for(i=0;i<8;i++)
         {
                         if(x & (1<<i))
                         {
                              a++;
                         }
                         
         }
         return a;
        
}


