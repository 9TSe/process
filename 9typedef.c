#include<stdio.h>
typedef unsigned int u_int; //使得 typedef unsigned 可以用 u_int 来表示
int main()
{
	unsigned int num1 = 100;   //于是这一行与下一行表达意思完全一样
	u_int num1 = 100;
	printf("%d", num1); //该项代码只做演示 不求运行
	return 0;
}
