#include <stdio.h>
#include <math.h>

void main(){
    char nome[50];
    int dias, idade;
    scanf("%s", &nome);
    scanf("%d", &idade);
    dias = idade * 365;
    printf("%d", dias);
}