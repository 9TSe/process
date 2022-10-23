#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct sb 
{
	char furname;
	int length;
};//注意有冒号
struct abc
{
	struct sb b;
	int age;
	char name[20];
};
int main()
{
	struct abc s = { {'b',180},18,"baishuyuan"}; //初始化结构体用花括号,当为两层事再加一个花括号即可;数据之间用逗号隔开
	               ////单引号表示只有一个字符,双引号表示结尾为\0的一串,双引号也可以引用单字符同理结尾为\0

	struct abc* a = &s;
	//打印二级结构中的数据两种方法如下(furname)
	printf("%c\n", (*a).b.furname);
	printf("%c\n", a->b.furname); //之所以不使用两次 -> 因为结构b并不为指针
}