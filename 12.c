#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	
		if (a > b)
		{
			printf("最大值为%d\n", a);
		}
		else
		{
			printf("最大值为%d\n", b);
		}
	return 0;
}