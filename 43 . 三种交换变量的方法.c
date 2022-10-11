#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;

//第一种方法为引入第三变量
//方法如下
//c = a;
//a = b;
//b = c;


//第二种方法为加法交换法,但有所局限
//不能交换非数字类型的变量
//对于浮点类型的变量可能会出现问题
//加法过程中可能会出现超出上限的问题

//方法如下
//a = b + a;
//b = a - b;
//a = a - b;



//第三种方法为异或交换法
//如下
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

//主要原理为 x ^ x = 0; 
	//       0 ^ x = x;

	return 0;
}