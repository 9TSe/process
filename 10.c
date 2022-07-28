#include<stdio.h>
void test()
{
	static int b = 1;
	b++;
	printf("%d\n", b);
}

int main()
{
	int a = 0;
	while (a < 10)
	{
		test();
		a++;
	}


	return 0;
}