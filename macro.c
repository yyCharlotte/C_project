//
// Created by y2295 on 2026/8/10.
// Day19：预处理宏定义、#include、条件编译
#include <stdio.h>
#include <windows.h>
#define DEBUG
#define ADD(a,b) ((a)+(b))

int main(void)
{
    system("chcp 65001 > nul");
    int x = ADD(3,5);
    printf("%d\n", x);

#ifdef DEBUG
    printf("调试模式开启，行号：%d\n", __LINE__);
#else
    printf("发布版本\n");
#endif
    return 0;
}
