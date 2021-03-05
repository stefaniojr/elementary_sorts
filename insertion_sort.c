#include "item.h"


void sort(Item *a, int lo, int hi)
{
    int* aux;
    aux = (int*) malloc(hi * sizeof(int));

    for(int i = lo; i<hi; i++)
        aux[i] = a[i];

    

    free(aux);
}