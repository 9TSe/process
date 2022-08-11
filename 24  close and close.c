#define  _CRT_SECURE_NO_WARNINGS
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
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		left ++;
		right --;

	}
	

	return 0;
}