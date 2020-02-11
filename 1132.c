#include <stdio.h>

int main()
{
    int X, Y, soma=0;
    
    scanf("%d %d", &X, &Y);
    
    if (X<Y){
        while (X<=Y){
            if (X%13!=0){
                soma = soma+X;
            }    
            X++;
        }
    }
    else{
        while (X>=Y){
            if (Y%13!=0){
                soma = soma+Y;
            }   
            Y++;
        }
    }
    printf("%d\n", soma);
}
