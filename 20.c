#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("����������");
	char password[20] = { 0 };
	scanf("%s", password);
	printf("��ȷ������(Y/N)");
	int qq = 0;
	while ((qq = getchar()) != '\n')
	{
		;
	}
	
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
		printf("ȷ��ʧ��");


	return 0;
}