#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //���� system ��ͷ�ļ�
#include<string.h> //���� strcmp ��ͷ�ļ�
int main()
{
	
	system("shutdown -s -t 60");
	printf("warning,your system will shutdown after one minute,input 'impig' to unlock\n");
	char input[20] = { 0 };
again:
	scanf("%s", input);
	if (strcmp(input,"impig") == 0) //�����ַ����޷�ֱ���� == ȥ�ж�,Ӧʹ�� strcmp
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