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
		b = max;// ��Ϊ max = b;   ��Ὣmax��ֵΪ����b,b����Ӱ��,������ֲ��ύ��.
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