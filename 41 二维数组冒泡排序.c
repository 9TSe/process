#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
			}
		}
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(&arr, sz);
	int i = 0;
	int* p = &arr[0];
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		*p++;
	}
	return 0;
}  //求整形数组的表达也可用以下方式
	/*int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}*/