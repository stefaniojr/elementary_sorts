#include "item.h"

void sort(Item *a, int lo, int hi)
{
    for (int i = 0; i < hi; i++)
        for (int j = 0; j < hi; j++)
            compexch(a[j], a[i]);
}