//
// Created by y2295 on 2026/8/8.
//

#include <stdio.h>
#include <windows.h>
int main()
{
    system("chcp 65001 > nul");

    int a = 10;
    int *p = &a;

    printf("a的值：%d\n", a);
    printf("a的地址&a：%p\n", &a);

    printf("p的值：%p\n", p);       // p存储的地址，等价&a
    printf("*p的值：%d\n", *p);     // 解引用，等价a
    printf("指针p自身地址&p：%p\n", &p);

    // 通过指针修改原变量
    *p = 1;
    printf("修改后 a = %d\n", a);
    *p++;
    printf("修改后 a = %d\n", *p);
    (*p)++;
    printf("修改后 a = %p\n", &p);
      // 先取值*p，再指针p自增

     // 先取*p的值，然后p指向的数据自增，指针本身不变
    return 0;
}