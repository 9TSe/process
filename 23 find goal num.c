#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]); // ���Ԫ�ظ����Է�����ַ��ҵ�Ŀ������
	int k = 7; //Ŀ������
	int left = 0; //1���±�
	int right = sz - 1; // 10���±�
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�����Ǹ��ҵ�,�±�Ϊ%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("���̵��Ҳ���");
	}
	

	return 0;
}