#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int huiwen(int i)
{
	int a = i;
	int b = 0;
	while (i > 0)
	{
		b = b * 10 + i % 10; //b取个位,个位乘10,再取十位,以此类推b -> i的回文;
		i /= 10;
	}
	if (a = b) { return 1; }
	else { return 0; }
}
int zhishu(int i)
{
	for (int j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (huiwen(i) && zhishu(i))
		{
			c++;
		}
	}
	printf("%d", c);
	return 0;
}