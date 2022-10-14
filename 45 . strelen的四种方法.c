#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//第一种方法为递归
//如下



//int mystrlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + mystrlen(arr + 1);
//	}
//	else
//	return 0;
//}



//第二种方法为调用函数strlen 并 引用头文件 #include<string.h>
//不在举例说明


//第三种方法为普通的循环逼近
//如下


//int mystrlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}



//第四种方法为指针的相减
//如下

int mystrlen(char* arr)
{
	char* str = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	return arr - str;
}
int main()
{
	char arr[] = "bai";
	printf("%d", mystrlen(arr));//若将 arr 替换为 "bai" 得到的答案是一样的取到的地址 仍然为第一个字符的地址
	return 0;
}
