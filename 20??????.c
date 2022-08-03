#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("请输入密码");
	char password[20] = { 0 };
	scanf("%s", password);
	printf("请确认密码(Y/N)");
	int qq = 0;
	while ((qq = getchar()) != '\n')
	{
		;
	}
	
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
		printf("确认失败");


	return 0;
}
