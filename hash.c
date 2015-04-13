#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"hash.h"
Hash* createHash()
{
    Hash* ht = (Hash*)malloc(sizeof(Hash));
    int i;

    for(i = 0; i < 300; i++)
    {
        ht->hash[i] = NULL;
    }
    return ht;
}
//teste


void put(Hash *ht, int estado_atual, int estado_pos_transicao, char entrada)
{
    Element * element = (Element*) malloc(sizeof(Element));

    element->entrada = entrada;
    element->estado = estado_pos_transicao;
    element->next = NULL;

    if(ht->hash[estado_atual] == NULL)
    {
        ht->hash[estado_atual] = element;
    }
    else
    {
        Element * aux;
        aux = ht->hash[estado_atual];
        while(aux->next != NULL)
        {
            aux = aux->next;
        }

        aux->next = element;
    }
}
