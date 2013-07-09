#include <stdio.h>


          
int main (void)

    {
          printf("ingrese un numero\n");
          int r;
          scanf("%d\n",&r);
        
          
      if (r<=10)
         {
          printf("uno\n");
          return (r);
        
          }
      else if (r=10) // arreglarlo para que no cuente negativos
      
         {
          printf("uno\n");
          return (r);
         }
      else 
          {
          printf("cero\n");
          return (r);
          }
          
          
          system("PAUSE");
    }
  
