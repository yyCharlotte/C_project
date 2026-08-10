//
// Created by y2295 on 2026/8/10.
// Day17：动态内存 malloc、calloc、realloc、free
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // malloc
    int *arr = (int *)malloc(3 * sizeof(int));
    if(arr == NULL)
    {
        perror("malloc");
        return 1;
    }
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // realloc扩容到5个int
    int *tmp = (int *)realloc(arr, 5 * sizeof(int));
    if(tmp != NULL)
    {
        arr = tmp;
    }

    arr[3] = 40;
    arr[4] = 50;

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}
