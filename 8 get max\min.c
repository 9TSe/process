#include<stdio.h>
int main()
{
	int a = 0;
	int b = 3;
	int max = 0;
	if (a > b)
		max = a;
	else
		max = b;
	printf("%d\n", max);

	int c = 0;
	int d = 9;
	int min = 0;
	min = c < d ? c : d;
	printf("%d\n", min);


	return 0;
}
