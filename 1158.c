#include <stdio.h>

int main()
{
    int N, X, Y, soma;
    
    scanf("%d", &N);
    while(N>0){
        scanf("%d %d", &X, &Y);
        while(Y>0){
            if(X%2!=0){
            soma=soma+X;
            Y--;
            }
        X++;    
        }
    printf("%d\n", soma);
    soma=0;
    N--;
    }

}