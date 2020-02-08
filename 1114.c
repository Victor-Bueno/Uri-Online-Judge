#include <stdio.h>

int main()
{
    int senha=0;
    
    if (senha!=2002){
        while (senha!=2002){
            scanf("%d", &senha);
            if (senha!=2002)
                printf("Senha Invalida\n");
            else
                printf ("Acesso Permitido\n");
        }        
    }
    else 
    printf ("Acesso Permitido\n");
}