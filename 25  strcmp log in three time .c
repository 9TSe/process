#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("please put in you password:  ");
		scanf("%s", password);
		//   if (password == "123456")  erro  两个字符串无法用==判断 应该用 strcmp
		if (strcmp(password, "123456") == 0)
		{
			printf("password right welcome \n ");
			break;
		}
		else
		{
			printf("password wrong please tyr again\n  ");
		}
	}
	if (i == 3)
	{
		printf("wrong");
	}
	return 0;
}
