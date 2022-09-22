#include<stdio.h>
#include<string.h>   //引用 strcpy 的头文件 也可不写,时代变了
int main()
{
    char arr1[20] = { 0 };
    char arr2[] = "hello bit";
    strcpy(arr1, arr2);    
    printf("%s", arr1);
    return 0;
}
