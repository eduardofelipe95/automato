#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define tamanho_max 1000

int lerEntrada(char *entrada)
{
    int posicao_ultimo, i;
    
    posicao_ultimo = strlen(entrada) - 2;
    i = posicao_ultimo;
    /*achando o numero de estados*/
    while(1)
    {
        if(entrada[i] == 'q')
        {
            i++;
            break;
        }
        i--;
    }

    char array[posicao_ultimo - i + 1];
    int j = 0;

    while(i < posicao_ultimo)
    {
        array[j] = entrada[i];
        i++;
        j++;
    }

    return atoi(array) + 1;

}

