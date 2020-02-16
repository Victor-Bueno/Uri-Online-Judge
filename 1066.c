#include <stdio.h>

int main()
{
    int a, b, c , d, e, par = 0, impar = 0, negativo = 0, positivo = 0;
    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a%2==0)
    par++;
    else
    impar++;
     if (b%2==0)
    par++;
    else
    impar++;
    if (c%2==0)
    par++;
    else
    impar++;
    if (d%2==0)
    par++;
    else
    impar++;
    if (e%2==0)
    par++;
    else
    impar++;
    if (a!=0)
    if (a>0)
    positivo++;
    else
    negativo++;
    if (b!=0)
    if (b>0)
    positivo++;
    else
    negativo++;
    if (c!=0)
    if (c>0)
    positivo++;
    else
    negativo++;
    if (d!=0)
    if (d>0)
    positivo++;
    else
    negativo++;
    if (e!=0)
    if (e>0)
    positivo++;
    else
    negativo++;
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
}