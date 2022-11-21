#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100000];
	gets(str);
	int m = strlen(str), i, sum = 0;
	if (str[0] >= '0' && str[0] <= '9')
	{
		for (i = 0; i < m; i++)
		{
			sum = sum * 10 + (str[i] - '0');
		}
		printf("%c\n", sum);
	}
	else
	{
		printf("%d\n", str[0]);
	}
	return 0;
}