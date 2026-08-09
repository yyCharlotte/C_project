//
// Created by y2295 on 2026/8/9.
//Day15：结构体、typedef、结构体内存对齐
#include <stdio.h>

// 演示成员顺序影响大小
struct A
{
    char c;
    long long a;
    short  i;
};

struct B
{
    long long a;
    short i;
    char c;
};

// typedef用法
typedef struct Student
{
    char name[21];
    int age;
} Stu;

int main(void)
{
    printf("sizeof(struct A) = %zu\n", sizeof(struct A));
    printf("sizeof(struct B) = %zu\n", sizeof(struct B));
    printf("sizeof(Stu) = %zu\n", sizeof(Stu));

    Stu s = {"Alice", 18};
    Stu *p = &s;
    printf("name:%s age:%d\n", p->name, p->age);
    return 0;
}
