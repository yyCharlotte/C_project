//
// Created by y2295 on 2026/8/8.
// Day12：二级指针、指针数组、数组指针区分

#include <stdio.h>
int main()
{
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int (*p0)[3] = arr; // 数组指针接收二维数组

    printf("%d\n", *(*(p0+1)+2)); // arr[1][2] = 6

    int a=10, b=20;
    int *arr1[2] = {&a, &b}; // 指针数组
    int **p1 = arr1;          // 二级指针接收指针数组名

    printf("%d\n", *p1[0]);  // 10 p1[0]是&a
    printf("%d\n", **p1);    // 10


    return 0;
}

