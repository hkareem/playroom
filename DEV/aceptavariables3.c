#include <stdio.h>

unsigned char par_impar(unsigned char x);
unsigned char cuenta_bits(unsigned char x);
#define SET_BIT(var,bit)   (var) = (var) | (1<<(bit)); 

int main(void)
{   
    unsigned char x = 0x00;
    
   SET_BIT(x,0);
   printf("%d\n", x); 
   SET_BIT(x,1);
   printf("%d\n", x); 
   SET_BIT(x,2);
   printf("%d\n", x); 
   SET_BIT(x,3);
   printf("%d\n", x); 
   system("PAUSE");
}

