//
// Created by y2295 on 2026/8/14.
//Day28：拷贝构造函数、浅拷贝与深拷贝
// #include <iostream>
// #include <cstring>
// #include <windows.h>
// using namespace std;
//
// class Student
// {
// private:
//     int id;         // 普通成员
//     int score;      // 普通成员
//     char* name;     // 堆指针成员（深浅拷贝核心）
// public:
//     // 静态计数器：统计对象个数
//     static int stuCount;
//
//     // 1. 普通构造函数
//     Student(int id_, const char* n_, int s_ = 0) : id(id_), score(s_)
//     {
//         // 堆内存开辟
//         name = new char[strlen(n_) + 1];
//         strcpy(name, n_);
//         stuCount++;
//         cout << "普通构造执行，当前学生数量：" << stuCount << endl;
//     }
//
//     // 2. 深拷贝构造函数（核心重难点）
//     Student(const Student& other)
//     {
//         // 拷贝普通成员
//         id = other.id;
//         score = other.score;
//
//         // 深拷贝关键：重新开辟堆内存，不共享地址
//         name = new char[strlen(other.name) + 1];
//         strcpy(name, other.name);
//
//         stuCount++;
//         cout << "深拷贝构造执行，当前学生数量：" << stuCount << endl;
//     }
//
//     // 3. 析构函数：释放堆内存
//     ~Student()
//     {
//         delete[] name;
//         stuCount--;
//         cout << "析构执行，当前学生数量：" << stuCount << endl;
//
// // 静态变量初始化
// int Student::stuCount = 0;
//
// int main()
// {
//     SetConsoleOutputCP(65001);
//     Student s1(1001, "张三", 88);
//     s1.showInfo();
//
//     // 触发深拷贝构造
//     Student s2 = s1;
//     s2.showInfo();
//
//     return 0;
// }  }
//
//     // 测试打印信息
//     void showInfo()
//     {
//         cout << "学号：" << id << " 姓名：" << name << " 分数：" << score << endl;
//     }
// };
#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

class Person
{
public:
    char* name;
    int age;

    // 有参构造
    Person(const char* n, int a)
    {
        age = a;
        name = new char[strlen(n)+1];//堆内存开辟
        strcpy(name, n);
    }

    // 深拷贝构造
    Person(const Person &p)
    {
        age = p.age;
        name = new char[strlen(p.name)+1];
        strcpy(name, p.name);
        cout << "深拷贝构造执行\n";
    }

    // 赋值运算符重载（深拷贝）
    Person& operator=(const Person &p)
    {
        if(this == &p)
            return *this;

        delete[] name;
        age = p.age;
        name = new char[strlen(p.name)+1];
        strcpy(name, p.name);
        return *this;
    }

    // 析构
    ~Person()
    {
        delete[] name;
        cout << "析构释放内存\n";
    }

    void show()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    SetConsoleOutputCP(65001);
    Person p1("张三", 18);
    Person p2 = p1;
    p2.show();

    Person p3("李四", 20);
   // p3 = p1;
    p3.show();
    return 0;
}