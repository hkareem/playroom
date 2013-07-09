#include <stdio.h>
int my_strlen(char *srting);
int is_equal(char *string1, char *string2);

int main (void)
{   
    int i, n=0;
    char str[] = "kareem";
   n = is_equal("hola", "holA");
   printf("%d\n",n);
   
    
   
    system("PAUSE");
}

int my_strlen(char *string)
{
    int t=0;
    while(*string !=0)
    {
                  t++;
                  string++;
    }
    t++;
    return t;
}

int is_equal(char *string1, char *string2)
{
       while((*string1 != 0) && (*string2 != 0))
      {
                       if(*string1 != *string2)
                        {
                           return 0;     
                        }
                        string1++;
                        string2++;
      }
      return 1;
}
