//
// Created by y2295 on 2026/8/10.
// Day20：文件操作 FILE、读写文件、内存四区模型
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // 写文件
    FILE *fp = fopen("data.txt", "w");
    if(NULL == fp)
    {
        perror("open fail");
        return 1;
    }
    fprintf(fp, "%s %d\n", "zhangsan", 18);
    fclose(fp);

    // 读文件
    fp = fopen("data.txt", "r");
    char name[32];
    int age;
    fscanf(fp, "%s %d", name, &age);
    printf("%s %d\n", name, age);
    fclose(fp);
    fp = NULL;
    return 0;
}