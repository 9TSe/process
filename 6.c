#include <stdio.h>
int main()
{
	int a = 9 / 2;
	int b = 9 / 2.0;
	float c = 9 / 2;
	float d = 9 / 2.0;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%f\n", c);
	printf("%f\n", d);
	return 0;
}