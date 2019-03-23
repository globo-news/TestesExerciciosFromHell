#include <stdio.h>

int main () {
int ladoscubo,areaface,areatodas,perimetroface,somasarestas,volume;
scanf("%d",&ladoscubo);
areaface = ladoscubo*ladoscubo;
areatodas = areaface* 6;
perimetroface = ladoscubo*4;
somasarestas = ladoscubo*12;
volume = ladoscubo*ladoscubo*ladoscubo;
printf("areaface %d\n",areaface);
printf("areatodas %d\n",areatodas);
printf("perimetroface %d\n",perimetroface);
printf("somasarestas %d\n",somasarestas);
printf("volume %d\n",volume);




}
