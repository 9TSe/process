#include<stdio.h>
int main()
{
    char arr[] = "hello bit";
    memset(arr, 'x', 5);// ����,��ʲô,������ (����������Ҫͷ�ļ�)
    printf("%s", arr);
    return 0;
}   // ������xxxxx bit