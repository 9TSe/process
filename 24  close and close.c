#include<windows.h>  //Sleep 的头文件
#include<stdio.h>
int main()
{
	char arr1[] = "hello world";
	char arr2[] = "#$%#%^&*^&*";
	
	int left = 0;
	int right = strlen(arr1) -1;
	
	while (left <= right)
	{  
		printf("%s\n", arr2);
		Sleep(1000);   //以毫秒为单位 S为大写
		
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		left ++;
		right --;
	        system("cls"); //清空屏幕

	}
	printf("%s\n", arr2);  //最后一次清空所有,补上最终结果
	return 0;
}
