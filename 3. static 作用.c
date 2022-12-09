#include<stdio.h>
void test()
{
	static int b = 1;
	printf("%d\n", b++);
}

int main()
{
        for(int i = 0 ; i < 9 ; i++)
	{
	   test();
	}  
	return 0;
}

//结果为 123456789
//static 使得函数调用进去使  b  仍然保持着上一次调用的值使其不会因为再一次初始化而变回原来的值
