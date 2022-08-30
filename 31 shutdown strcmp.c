#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //引用 system 的头文件
#include<string.h> //引用 strcmp 的头文件
int main()
{
	
	system("shutdown -s -t 60");
	printf("warning,your system will shutdown after one minute,input 'impig' to unlock\n");
	char input[20] = { 0 };
again:
	scanf("%s", input);
	if (strcmp(input,"impig") == 0) //两个字符串无法直接用 == 去判断,应使用 strcmp
	{
		system("shutdown -a");
		printf("ok my pig baby");
	}
	else
	{
		goto again;
	}
	return 0;
}