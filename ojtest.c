#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[1000] = { 0 };
	int count = 0;
	scanf("%[^\n]%*c", arr);//gets(arr)�õ�������Ĭ�Ͻ�β������ %s (������ %s �޷���ȡ�ո�� )��'\n' ����'\0'
	                        //ͬ����,     scanf("%[^\n]", arr)     ��β�õ���Ҳ��\0
	                        //Ҳ��        scanf("%[^\n]%*c",arr);  ��β�õ���Ҳ��\0  ������֮��������,%*c �൱��������,ֻ�ǹ涨���ʽ
	for (int i = 0; ; i++) 
	{
		if (arr[i] == '\0')
		{
			break;
		}
		if ((arr[i] >= 'a' && arr[i] <= 'z' )|| (arr[i] >= 'A' && arr[i] <= 'Z'))
		{
			count++;
			i++;
			if (arr[i] == '\0')
			{
				break;
			}
			while (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
			{
				i++;
				if (arr[i] == '\0')
				{
					break;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}

