#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))// ||表示或者   &&表示并且
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}