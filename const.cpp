//
// Created by y2295 on 2026/8/11.
// Day23：const 深度用法、const 修饰指针 ，函数参数
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    // 1. const int *
    const int *p1 = &a;
    cout << *p1 << endl;
    // *p1 = 100; error
    p1 = &b;
    cout << *p1 << endl;
    // 2. int *const
    int *const p2 = &a;
    *p2 = 200;
    // p2 = &b; error

    //3. const int *const
    const int *const p3 = &a;
    // *p3 = 300; error
    // p3 = &b; error

    return 0;
}