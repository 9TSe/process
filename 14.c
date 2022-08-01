#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int MAX(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
	
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = MAX(a, b);
	
	printf("最大值还就那个是%d", m);


	return 0;
}