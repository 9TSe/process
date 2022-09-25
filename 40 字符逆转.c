#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}

int my_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

void opp_all(char* arr)
{
	char tmp = *arr;               //去 a
	int len = my_strlen(arr);
	*arr = *(arr + len - 1);      //f替a位置
	*(arr + len - 1) = '\0';      //该f为\0
	if (my_strlen(arr + 1) >= 2)
	{
		opp_all(arr + 1);         //中间循环递归
	}                              
	*(arr + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	opp_all(arr);
	printf("%s\n", arr);
	return 0;
}