//
// Created by y2295 on 2026/8/14.
//
#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

// class Person
// {
// public:
//     char* name;
//     Person(const char* n)
//     {
//         name = new char[strlen(n)+1];
//         strcpy(name, n);
//         cout << name << endl;
//         cout << "构造：分配内存\n";
//     }
//     // 析构释放资源
//     ~Person()
//     {
//         cout << name << endl;
//         delete[] name;
//         cout << "析构：释放内存\n";
//     }
// };

// int main()
// {
//     SetConsoleOutputCP(65001);
//     Person p("张三");      // 栈对象，main结束自动析构
//
//     Person* pp = new Person("李四");
//     delete pp;
//     pp = nullptr;
//     return 0;
// }
class A
{
public:
    virtual ~A() { cout << "A\n"; }
};
class B : public A
{
public:
    ~B() { cout << "B\n"; }
};
int main()
{
    A* p = new B;
    delete p;
    return 0;
}