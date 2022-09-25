#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
print_table(int n)
{
	int hang;
	for (hang = 1; hang <= n; hang++)
	{
		int lie;
		for (lie = 1; lie <= hang; lie++)
		{
			printf("%2dx%2d=%2d  ", lie, hang, lie * hang);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}