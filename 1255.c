#include <stdio.h>

int main () {
	int N, pos, max, cont[123];
	char c, frase[201];

	scanf("%d%*c", &N);
    while(N > 0){
        scanf("%[^\n]%*c", &frase);
        int j = 97;
        while(j <= 122){
            cont[j] = 0;
            j++;
        }
        int i = 0;
        max = 0;
        while(frase[i] != '\0'){
            if(frase[i] >= 65 && frase[i] <= 90){
                frase[i] += 32;
            }
            if(frase[i] >= 97 && frase[i] <= 122){
                pos = frase[i];
                cont[pos]++;
                if(cont[pos] > max){
                    max = cont[pos];
                }    
            }
            i++;
        }
        for(c = 'a'; c <= 'z'; c++){
            if(cont[c] == max){
                printf("%c",c);
            }    
        }
        printf("\n");
        N--;
    }
}