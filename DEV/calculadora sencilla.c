#include <stdio.h>

int main (void)
    {    
         int num;
         int num2;
         int resultado;
         
         printf("quieres multiplicar es 1, dividir es 2, restar es 3 o sumar es 4\n");
         scanf("%d",&num);
         if (num==1)
         {
            printf("multiplicar:\n" );
            printf("ingrese un numero\n");
            scanf("%d",&num);
            printf("ingrese otro numero\n");
            scanf("%d",&num2);
            resultado = num * num2;
            printf("%d",resultado);
            
         }    
         else  if(num == 2)
         {
                printf("dividir\n");
          }
         
         else  if(num == 3)
          {
                printf("restar\n");
          }
               
         else  if(num == 4)
          {
                printf("sumar\n");
          }
         else  
          {
                printf("error\n");
      
         }
         
         
         
         
    
          
          
          
                  
          
         
         
         
          
         system("PAUSE");
    }
