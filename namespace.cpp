//
// Created by y2295 on 2026/8/10.
// Day21: namespace初尝试 喵喵喵
// #include <iostream>
// #include <windows.h>
// // 创建命名空间
// namespace MySpace
// {
//     int a = 100;
//     int b = 88;
//     void func()
//     {
//         std::cout << "MySpace func" << std::endl;
//     }
// }
//
// int main()
// {
//     SetConsoleOutputCP(65001);
//     // 访问格式：命名空间::名字
//
//     std::cout << "hello" <<std::endl;
//
//     std::cout << MySpace::a << std::endl;
//     std::cout << MySpace::b << std::endl;
//
//     std::cout << "nihao" << std::endl;
//     std::cout << "王淇乐王淇，你被捕了！" << std::endl;
//     std::cout << "乐乐乐乐乐乐乐乐乐乐！" << std::endl;
//     std::cout << "你好王淇萱，王淇萱小乐乐" << std::endl;
//
//
//     MySpace::func();
//     return 0;
// }
// #include <iostream>
// #include <string>
// int main()
// {
//     std::string s;
//     std::cin >> s;   // 遇到空格自动截断，无法读取带空格字符串
//     std::cout << s << std::endl;
//
//     return 0;
// }
#include <iostream>
#include <windows.h>
using namespace std;

namespace Calc
{
    int add(int x, int y)
    {
        return x + y;
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    int a, b;
    cout << "输入两个整数：";
    cin >> a >> b;

    int res = Calc::add(a, b);
    cout << "他们的和是 " << res << endl;
    return 0;
}