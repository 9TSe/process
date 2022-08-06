#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int q = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		q *= i;
	}
	printf("%d", q);
	


	return 0;
}