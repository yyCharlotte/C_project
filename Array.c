//
// Created by y2295 on 2026/8/7.
//

#include <stdio.h>
#include <windows.h>

int main() {
    system("chcp 65001 > nul");

    int arr[5]={10,20,30,40,50};
    printf("数组元素：");
    for (int i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("arr[2]=%d\n",arr[2]);
    return 0;
}
