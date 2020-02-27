#include <stdio.h>

int main()
{
    int N=-5, z=0, i, j;

    while(N!=0){
        scanf("%d", &N);
        if (N != 0){
        int M[N][N];

            for(z=0;z<N;z++){
                for(i=z;i<N-z;i++){
                    for(j=z;j<N-z;j++){
                        M[i][j]=z+1;
                    }
                }
            }
            for(i=0;i<N;i++){
                for(j=0;j<N;j++){
                    int val = M[i][j];
                    if (val > 99){
                         printf("%d",val);
                     }else if (val > 9 ){
                        printf(" %d",val);
                     }else{
                         printf("  %d",val);
                     }
                     if (j < N-1){
                         printf(" ");
                     }

                    }
                printf("\n");
                }
                printf("\n");
        }

        }
}
