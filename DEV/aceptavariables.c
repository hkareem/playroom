#include <stdio.h>

unsigned char par_impar(unsigned char x);

int main(void)
{   
    int a,b;
    scanf ("%d", &b);
    a = par_impar(b);
    a = par_impar(20);
    printf("%d\n",a);
    
  
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
