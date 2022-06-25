#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main ()
{
float G,V,H,X1,X2,Z;
printf("\nInforme G: ");
scanf("%f", &G);
printf("\nInforme V: ");
scanf("%f", &V);
printf("\nInforme H: ");
scanf("%f", &H);
Z= pow(V,2) - 4*(G/2)*H;
if (Z<0)
{
printf("\n\nNao existe solucao real.\n");
}
else
{
if (Z==0)
{
printf("\n\nExiste uma solucao.\n");
X1 = ((-1)*V + sqrt(Z))/2*(G/2);
printf("\n\nA raiz da equação e: %4.2f", X1);
system("pause");
}
if (Z>0)
{
printf("\n\nExistem duas solucoes.\n");
X1 = ((-1)*V + sqrt(Z))/2*(G/2);
X2 = ((-1)*V - sqrt(Z))/2*(G/2);
printf("\nA primeira raiz e: %4.2f", X1);
printf("\nA segunda raiz e: %4.2f", X2);
}
}
printf("\n\nFim do programa.\n");
system("pause");
return 0;
}