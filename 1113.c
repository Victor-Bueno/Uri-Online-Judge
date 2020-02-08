#include <stdio.h>

int main ()
{
  int X = 1, Y = 0;
  while(X != Y)
    {
      scanf("%d", &X);
      scanf("%d", &Y);
      if(X != Y) {
        if (X > Y)
	    printf("Decrescente\n");
        else
	    printf("Crescente\n");
      }
    }


}