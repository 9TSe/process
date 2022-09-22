#include<stdio.h>
int main()
{
    char arr[] = "hello bit";
    memset(arr, 'x', 5);// 姓名,改什么,改哪里 (他甚至不需要头文件)
    printf("%s", arr);
    return 0;
}   // 输出结果xxxxx bit