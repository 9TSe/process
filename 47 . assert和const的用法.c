#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h> strcpy 的头文件
#include<assert.h>//assert 的头文件
void my_strcpy(char* dest, const char* str) //const 写在*前面可以固定指针变量使其不可改变
                                            //比如 * str = * dest 将无法运行
	                                        // const 写在*后面可以固定指针,使指针无法改变指向
                                            //比如   str = &arr1   将无法运行
	                                        //若 const char * const str  则指针str变量即不可改变也无法改变指向
{
	assert(*dest != NULL);    // 当assert中表达式为假则会导致运行时发生错误从而易于从代码中找到错误
	assert(*str != NULL);     //从而可以避免空指针导致的运行挂码
	                         
	while (*dest++ = *str++)  // \0 对应的ASCIL值为 0 因此可被判断为假
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1,arr2 );

	/*strcpy(arr1, arr2);  strcpy可将arr2中的字符传递到arr1中而arr2不改变*/

	printf("%s\n",arr1);




	          //const 关于数值的固定

	/*const int num = 0;
	num = 10;             取消此注释以显示报错
	但如此却可通过指针来间接改变num

	int* p = &num;
	*p = 10;

	可再次通过 const 固定

	const int* i = &num
	* i = 10;

	printf("%d\n", num);*/





	           //const关于指针的固定
	int a = 0;
	int b = 0;
	//const int* p = &a;  //此时无法通过*p来改变a的值
	//*p = 1;
	int* const p = &a; //此时无法改变指针p指向的方向
	p = &b;

	return 0;
}