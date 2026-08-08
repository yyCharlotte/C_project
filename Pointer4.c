//
// Created by y2295 on 2026/8/8.
// Day13：字符指针、字符串指针操作
//
// 1.字符数组 VS 字符串指针
// #include <stdio.h>
// #include <windows.h>
//
// int main()
// {
//     system("chcp 65001 > nul");
//     // 1. 字符数组：字符串拷贝到栈内存，内容可修改
//     char str_arr[] = "hello";
//     str_arr[0] = 'H';
//     printf("str_arr = %s\n", str_arr);
//
//     // 2. 字符串指针：仅保存常量字符串首地址，字面量在只读区
//     char *str_ptr = "hello";
//     // str_ptr[0] = 'H'; // ❌ 运行崩溃！禁止修改只读内存
//     printf("str_ptr = %s\n", str_ptr);
//
//     // 数组名是地址常量，不能自增；指针变量可以移动
//     char *p = str_arr;
//     p++;      // ✅ 合法
//     // str_arr++; // ❌ 编译报错
//     printf("The pointer p after moving: %c\n", *p);
//     printf("移动后p指向: %c\n", *p);
//
//     return 0;
// }
//
// 2.指针遍历字符串（自定义简易输出）
// #include <stdio.h>
//
// void print_str(const char *s)
// {
//     // 依靠 '\0' 终止循环
//     while (*s != '\0')
//     {
//         putchar(*s);
//         s++;
//     }
//     putchar('\n');
// }
//
// int main()
// {
//     char buf[] = "C language abcdefg";
//     char *str = buf;
//
//     print_str(str);
//     return 0;
// }
// 3.指针实现 my_strlen 求字符串长度（不含 '\0'）
// #include <stdio.h>
//
// size_t my_strlen(const char *s)
// {
//     const char *start = s;
//     while (*s)
//     {
//         s++;
//     }
//     return s - start; // 指针相减，得到字符个数
// }
//
// int main()
// {
//     char arr[] = "hello world ";
//     char *p = arr;
//     printf("length:%zu\n", my_strlen(p));
//     return 0;
// }
// 4.指针实现字符串拷贝 my_strcpy
// #include <stdio.h>
// #include <windows.h>
// void my_strcpy(char *dst, const char *src)
// {
//     // *dst++ = *src++ 先赋值，再自增；遇到'\0'循环结束
//     while ((*dst++ = *src++) != '\0');
// }
//
// int main()
// {
//     system("chcp 65001 > nul");
//     char dest[64];
//     const char *src = "test string";
//
//     my_strcpy(dest, src);
//     printf("拷贝结果：%s\n", dest);
//     return 0;
// }
// 5.指针翻转字符串
// #include <stdio.h>
// #include <windows.h>
//
//
// size_t my_strlen(const char *s)
// {
//     const char *start = s;
//     while (*s) s++;
//     return s - start;
// }
//
// void str_reverse(char *str)
// {
//     char *left = str;
//     char *right = str + my_strlen(str) - 1;
//
//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }
//
// int main()
// {
//     system("chcp 65001 > nul");
//     char buf[] = "abcdef";
//     str_reverse(buf);
//     printf("反转后：%s\n", buf);
//     return 0;
// }
// 6.指针数组（多字符串）操作
// #include <stdio.h>
// #include <string.h>
//
// int main()
// {
//     // 指针数组：每个元素是 char*，指向不同字符串
//     const char *names[] = {"Zhang", "Li", "Wang"};
//     int num = sizeof(names)/sizeof(names[0]);
//
//     for(int i = 0; i < num; i++)
//     {
//         printf("%s\n", names[i]);
//     }
//
//     // 利用二级指针遍历
//     const char **p = names;
//     for(int i = 0; i < num; i++)
//     {
//         printf("%s ", *(p+i));
//     }
//     return 0;
// }
// 7.易错野指针演示
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// int main()
// {
//     char *s1;
//     // strcpy(s1, "123"); ❌ 野指针！s1没有指向有效内存
//
//     // 正确方案1：绑定数组
//     char buf[32];
//     char *s2 = buf;
//     strcpy(s2, "hello");
//     printf("%s\n", s2);
//
//     // 正确方案2：堆内存分配
//     char *s3 = (char*)malloc(32);
//     strcpy(s3, "malloc string");
//     printf("%s\n", s3);
//     free(s3);
//
//     return 0;
// }