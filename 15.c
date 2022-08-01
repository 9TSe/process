#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int M = 0;
	scanf("%d", & M);
	if (M%5 == 0)
		printf("%s", "YES");
	else
		printf("%s", "NO");
	return 0;
}