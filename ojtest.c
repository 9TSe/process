#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void convert(int n, char str[40])
{
	int i = 0;
	while (n / 2 != 0)
	{
		str[i] = n%2;
		i++;
		n /= 2;
	}
	str[i] = n%2;
	for (int j = i; j >= 0; j--)
	{
		printf("%d", str[j]); //char�������鵫��ӡ�����ı���������������
	}
	printf("\n");
}
int main()
{
	int n = 0; 
	scanf("%d", &n);
	char arr[40];
	convert(n, arr);
	return 0;
}

