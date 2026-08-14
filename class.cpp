//
// Created by y2295 on 2026/8/14.
//Day26：类与对象、访问控制 public private protected
#include <iostream>
using namespace std;
class Demo
{
protected:
    int num;
public:
    void setNum(int val)
    {
        num = val;
    }
    int getNum()
    {
        return num;
    }
};
int main()
{
    Demo d;
    d.setNum(100);
    cout << d.getNum() << endl;
    return 0;
}