#include<stdio.h>
int find_it(int x[],int k) //形参本质上是指针
{
	int left = 0;
	int right = (sizeof(x) / sizeof(x[0])) ; //这里输出的right是1  在函数中使用 sizeof 只能为1 以下是原因
	int mid = (left + right) / 2;            //第一，在c中，数组在作为参数的时候就退化为指针，
	                                         //对一个地址来取大小呢，如果是32位系统的话即为4，如果是64位系统的话为8，
		                                     //所以呢，在函数中sizeof获取的是指针的长度而不是数组的长度。
		     //第二呢，在函数中，sizeof的处理时间的在编译期，也就是说对于动态生成的数组大小是不能用sizeof来算出来的。
	while (left <= right)        //正确方式是在函数外就求出数组长度           
		if (x[mid] = k)
		{
			return mid;
			break;
		}
		else if (x[mid] <= k)
		{
			left = mid;
			mid = (left + right) / 2;
		}
		else if (x[mid] >= k)
		{
			right = mid;
			mid = (left + right) / 2;
		}
		else
		{
			return -1;
		    break;
		}
            
}
int main()
{
	int a[] = {1,2,3,4,5};
	int key = 10;
	
	if (find_it(a,key) != -1) //数组传参的时候,传递的其实是数组首元素的地址
	{
		printf("the number's under is : %d", find_it(a,key));
	}
	else
	{
		printf("nothing");
	}

	return 0;
}
