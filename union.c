//
// Created by y2295 on 2026/8/9.
// Day16:union联合体
#include <stdio.h>

union Data {
    int num;
    char c;
};

int main()
{
    union Data d;
    d.num = 0x41;
    printf("num = %d, c = %c\n", d.num, d.c); // c 输出 'A'

    d.c = 'B';
    printf("num = %d, c = %c\n", d.num, d.c);
    return 0;
}
