//
// Created by y2295 on 2026/8/8.
// Day11：指针与数组、数组名特性
#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr    = %p\n", &arr);

    printf("arr+1   = %p\n", arr+1);
    printf("&arr+1  = %p\n", &arr+1);

    printf("sizeof(arr) = %zu\n", sizeof(arr));
    printf("sizeof(&arr[0]) = %zu\n", sizeof(&arr[0]));

    int *p = arr;
    printf("p[2] = %d, *(p+2) = %d\n", p[2], *(p+2));
    return 0;
}