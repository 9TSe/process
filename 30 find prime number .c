#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>    
//include<math.h>     ���� sqrt ��ƽ����ͷ�ļ�
int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i+=2)  //ż����������
	{
		for (j = 2; j < i; j++)   //  for ( j = 2 ; j <= sqrt(i) ; j ++ )  ʹ���Ż�
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