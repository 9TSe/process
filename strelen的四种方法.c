#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��һ�ַ���Ϊ�ݹ�
//����



//int mystrlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + mystrlen(arr + 1);
//	}
//	else
//	return 0;
//}



//�ڶ��ַ���Ϊ���ú���strlen �� ����ͷ�ļ� #include<string.h>
//���ھ���˵��


//�����ַ���Ϊ��ͨ��ѭ���ƽ�
//����


//int mystrlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}



//�����ַ���Ϊָ������
//����

int mystrlen(char* arr)
{
	char* str = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	return arr - str;
}
int main()
{
	char arr[] = "bai";
	printf("%d", mystrlen(arr));//���� arr �滻Ϊ "bai" �õ��Ĵ���һ����ȡ���ĵ�ַ ��ȻΪ��һ���ַ��ĵ�ַ
	return 0;
}