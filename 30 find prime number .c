#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>    
//include<math.h>     引用 sqrt 开平方的头文件
int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i+=2)  //偶数不是质数
	{
		for (j = 2; j < i; j++)   //  for ( j = 2 ; j <= sqrt(i) ; j ++ )  使其优化
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}