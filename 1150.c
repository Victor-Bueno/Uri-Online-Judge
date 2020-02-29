#include <stdio.h>

int main()
{
    int X,Z=0,i=1, soma=0;
    
    scanf("%d", &X);
    while(X>=Z){
        scanf("%d",&Z);
    }   
    soma=X;
    while(soma<=Z){
        X++;
        soma=soma+(X);
        i++;
    }
    printf("%d\n", i);
}