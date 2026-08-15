//
// Created by y2295 on 2026/8/15.
//
#include <iostream>
#include <windows.h>
using namespace std;

class Person
{
public:
    Person()
    {
        m_count++;
    }
    ~Person()
    {cout << m_count << endl;
        cout << "当前对象数量：" << m_count << endl;
        m_count--;
        cout << "当前对象数量：" << m_count << endl;
    }
    // 静态成员函数
    static void printNum()
    {
        cout << "当前对象数量：" << m_count << endl;
    }
private:
    static int m_count; // 静态成员变量声明
};
// 类外初始化
int Person::m_count = 0;

int main()
{
    SetConsoleOutputCP(65001);
    Person::printNum();

    Person p1, p2;
    Person::printNum();

    Person *p = new Person;
    Person::printNum();
    delete p;//这个也会自动调用析构函数，用来析构堆上的函数

    Person::printNum();
    //会自动调用析构函数，销毁栈上的函数
    return 0;
}
