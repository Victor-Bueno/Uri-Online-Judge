#include <stdio.h>
#include <string.h>
int main()
{
    char frase[50], i, j, espaco=0;
    
    while (gets(frase) != NULL){
        espaco=0;
        for(i=0; frase[i]!='\0'; i++){
            j=i+1;
            if(frase[i]==' '){
                espaco++;
            }
            else if((j-espaco)%2!=0){
                if(frase[i] >= 'A' && frase[i] <= 'Z'){
                    frase[i]=frase[i];
                }
                else if(frase[i] >= 'a' && frase[i] <= 'z'){
                    frase[i] = frase[i]-32;
                }
            }
            else if((j-espaco)%2==0){
                if(frase[i] >= 'a' && frase[i] <= 'z'){
                    frase[i]=frase[i];
                }
                else if(frase[i] >= 'A' && frase[i] <= 'Z'){
                    frase[i] = frase[i]+32;
                }
            }
        }
        printf("%s\n", frase);
    }
}
