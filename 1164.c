#include<stdio.h>

int main() {
   int N, X, divisores=0, teste=1;

   scanf("%d", &N);
   if(N>=1 && N <= 20){
     while (N>0){
            scanf("%d", &X);
            if (X>=1 && X<=10^8){
                while(teste<X){
                    if (X%teste==0){
                        divisores=divisores+teste;
                    }
                     teste++;
                }
                if (divisores==X)
                    printf("%d eh perfeito\n", X);
                else
                printf("%d nao eh perfeito\n", X);
            }
            N--;
            divisores=0;
            teste=1;
        }
   }

}