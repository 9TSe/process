#include<stdio.h>   //没有这个EOF无法被定义
int main()
{
	int ch = 0;
	while ((ch = getchar())!= EOF)
	{
		putchar(ch);
	}
	return 0;
}
