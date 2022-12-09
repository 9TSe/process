#include<stdio.h>
int main()
{
    char arr[] = "hello bit";
    memset(arr, 'x', 5);// 姓名,改成什么,改哪之前
    printf("%s", arr);
    return 0;
}   // 输出结果xxxxx bit
