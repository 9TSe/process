#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char str1[4] = "abc";//多留一个自动补充'\0'
    char str2[] = "abc"; //比较自由
    char str3[4] = { 'a','b','c' }; //多留一个自动补充'\0'
    char str4[] = { 'a','b','c','\0'};//必须手动补充一个'\0'
    
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
   
    return 0;
}
