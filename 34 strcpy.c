#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[20] = { 0 };
    char arr2[] = "hello bit";
    strcpy(arr1, arr2);
    printf("%s", arr1);
    return 0;
}