#include <stdio.h>

int main()
{
    int inter=0, gremio=0, grenal=1, res=0, grenais=0, vitoriasG=0, vitoriasI=0, empate=0;
    
    while (grenal>0){
        scanf ("%d", &inter);
        scanf ("%d", &gremio);
        if(inter>gremio)
            vitoriasI++;
        else if(gremio>inter)
            vitoriasG++;
        else if(gremio==inter)
            empate++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &res);
        if (res==1){
            grenal++;
        }
        else if (res==2){
            grenais=grenal;
            grenal=0;
        }
        
    }
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", vitoriasI);
    printf("Gremio:%d\n", vitoriasG);
    printf("Empates:%d\n", empate);
    if(vitoriasG>vitoriasI)
        printf("Gremio venceu mais\n");
    else if(vitoriasI>vitoriasG)
        printf("Inter venceu mais\n");
    else if(vitoriasG==vitoriasI)
        printf("Nao houve vencedor\n");
}