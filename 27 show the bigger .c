#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);

	if (b > a)
	{
		int max = a;
		a = b;
		b = max;// 若为 max = b;   则会将max赋值为等于b,b不受影响,因此数字不会交换.
	}
	if (c > a)
	{
		int max = a;
		a = c;
		c = max; 
	}
	if (c > b)
	{
		int max = b;
		b = c;
		c = max;
	}
	printf("%d %d %d\n", a, b, c);

	return 0;
}