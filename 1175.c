#include <stdio.h>

int main()
{
    int i, j=19, V[20], Aux[20];
    
    for(i=0; i<20 ;i++){
        scanf("%d", &V[i]);
    }
    for(i=0; i<20 ;i++){
        Aux[j]=V[i];
        j--;
    }
    j=0;
    for(i=0; i<20 ;i++){
        V[i]=Aux[j];
        j++;
    }    
    for(i=0; i<20 ;i++){
        printf("N[%d] = %d\n", i, V[i]);
    }
}
