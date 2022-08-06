#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++) //为方便验证便以  1!+2!+3!  来计算
	{                         /*从第8列开始有更简便的办法( eg: 3! = 2! + 3)
							     j  *=  n;
							     sum += j;
								 printf("%d",sum);    以上
							  
							  */
		j = 1; //若无这步             
		for (i = 1; i <= n; i++)
		{
			j *= i; //j在第二次循环开始时不为1
		}
		    sum += j;
	}
	printf("%d", sum);
	return 0;
}