#include "item.h"

void sort(Item *a, int lo, int hi)
{
    int trocou = 1;
    hi = hi - 1;

    while (trocou)
    {
        trocou = 0;
        for (int i = lo; i < hi; i++)
        {
            if (less(a[i + 1], a[i]))
            {
                exch(a[i], a[i + 1]);
                trocou = 1;
            }
        }

        if (!trocou)
            break;

        trocou = 0;
        hi--;

        for (int i = hi; i > lo; i--)
        {
            if (less(a[i + 1], a[i]))
            {
                exch(a[i], a[i + 1]);
                trocou = 1;
            }
        }

        lo++;
    }
}