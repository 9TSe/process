#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char str1[4] = "abc";//����һ���Զ�����'\0'
    char str2[] = "abc"; //�Ƚ�����
    char str3[4] = { 'a','b','c' }; //����һ���Զ�����'\0'
    char str4[] = { 'a','b','c','\0'};//�����ֶ�����һ��'\0'
    
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
   
    return 0;
}