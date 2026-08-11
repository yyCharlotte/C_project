//
// Created by y2295 on 2026/8/11.
// Day22：引用 &、引用与指针对比、常引用
#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void show(const int &v)
{
    cout << v << endl;
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    show(a);
    cout << a << endl;
    cout << b << endl;

    const int &ref = 999; // 常引用绑定临时量
    cout << ref << endl;
    return 0;
}