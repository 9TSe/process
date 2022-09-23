#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d\n", x % 10);
}
int main()
{
	int a = 0;
	scanf("%d", &a); //1234
	print(a);
	return 0;
}