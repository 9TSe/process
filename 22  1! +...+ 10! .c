#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++) //Ϊ������֤����  1!+2!+3!  ������
	{                         /*�ӵ�8�п�ʼ�и����İ취( eg: 3! = 2! + 3)
							     j  *=  n;
							     sum += j;
								 printf("%d",sum);    ����
							  
							  */
		j = 1; //�����ⲽ             
		for (i = 1; i <= n; i++)
		{
			j *= i; //j�ڵڶ���ѭ����ʼʱ��Ϊ1
		}
		    sum += j;
	}
	printf("%d", sum);
	return 0;
}