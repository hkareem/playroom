#include <stdio.h>


int main(void)
{   
    int x =0, i;
    
    for(i=0;i<10;i++)
    {
         inc(x);
    }
  
    system("PAUSE");
}

void inc (int y)
{
   x++;
   printf("x vale: %d",x );  
}
