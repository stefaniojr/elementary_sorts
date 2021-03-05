#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main()
{

    int N;
    printf("Qual a quantidade N de itens a serem recebidos?\n");
    scanf("%d", &N);

    int *array;
    array = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);

    sort(array, 0, N);

    for (int i = 0; i < N; i++)
        printf("%d ", array[i]);

    free(array);
    return 0;
}