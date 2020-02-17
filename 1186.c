#include <stdio.h>

int main()
{
    char comando;
    float M[12][12], Soma=0, Media=0, n=0;
    int i, j;
    
    scanf("%c", &comando);
    if(comando=='S'){
        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%f", &M[i][j]);
            }
        }
        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                if(j+i>11){
                    Soma= Soma+M[i][j];
                }
            }
        }
        printf("%.1f\n", Soma);
    }
    else if(comando=='M'){
        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%f", &M[i][j]);
            }
        }
        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                if(i+j>11){
                    Media= Media+M[i][j];
                    n++;
                }
            }
        }
        printf("%.1f\n", Media/n);
    }
}