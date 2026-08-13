//
// Created by y2295 on 2026/8/13.
//

#include <iostream>
#include <windows.h>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base 虚函数" << endl;
    }
    virtual ~Base() = default;
};

class Son : public Base
{
public:
    void show() override
    {
        cout << "Son 重写虚函数" << endl;
    }
};

int main()
{
    SetConsoleOutputCP(65001);
    Base* p = new Son();
    p->show();
    delete p;
    return 0;
}
