#include<stdio.h>
//数组名是什么?
//数组名是数组首元素的地址
//但有两个例外
//1: sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2: &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", &arr);   //虽然与下述结果一样但是它取出的是数组的地址
	printf("%p\n", &arr + 1);

	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	printf("%d\n", sizeof(arr));

	return 0;
}