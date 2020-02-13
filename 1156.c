#include<stdio.h>

int main() {
   float S=1, x=3, y=2;
   while (x<=39){
       S=S+x/y;
       x=x+2;
       y=y*2;
       
   }
   printf("%.2f\n", S);
   
}