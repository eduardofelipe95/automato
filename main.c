#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "entradas.h"
#define tamanho_max 1000



int main()
{
    char * entrada = (char*)malloc(tamanho_max * sizeof(char));
    printf("digite sua entrada\n");
    fgets(entrada, tamanho_max, stdin);
    printf("o automato tem %d estados\n", lerEntrada(entrada));

    return 0;
}
