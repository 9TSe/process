#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]); // 算出元素个数以方便二分法找到目标数字
	int k = 7; //目标数字
	int left = 0; //1的下标
	int right = sz - 1; // 10的下标
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
			printf("还就那个找到,下标为%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("奶奶的找不到");
	}
	

	return 0;
}