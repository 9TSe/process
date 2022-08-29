#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{   

	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int max = 0;        // int c = 0 ;   辗转相除法
	if (a > b)          // while( c = a % b)
	{                   //{
		max = b;    //  b = a;
	}                   //  c = b;
	else                // }
	{                   // printf("the greatest common divisor is %d",b)
		max = a;
	}
	while (1)
	{
		if (a % max == 0 & b % max == 0)
		{
			printf("the greatest common divisor is %d", max);
			break;
		}max--;
	}
	return 0;
}
