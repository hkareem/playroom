#include <stdio.h>

int inc (int x);
int main(void)
{   
    int x =0, i;
    
    for(i=0;i<10;i++)
    {
       x =  inc(x);
       printf("%d\n",x);
    }
  
    system("PAUSE");
}

void inc (int x)
{
   x++;
   printf("x vale: %d\n",x );  
}
