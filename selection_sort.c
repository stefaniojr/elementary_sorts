#include "item.h"


void sort(Item *a, int lo, int hi)
{
    int i, j, atual;

    for(i=lo;i<hi;i++){
        atual = i;
        for(j=i+1; j<=hi; j++)
            if(less(a[j], a[atual]))
                atual = j;
        exch(a[i], a[atual]);
    }  
}