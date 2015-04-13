#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

typedef struct element{
    int estado;
    char entrada;
    struct element *next;
}Element;

typedef struct hash{
    Element *hash[300];
}Hash;

Hash* createHash();

int hashFunction(int posicao);

#endif
