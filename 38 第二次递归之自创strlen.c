#include <stdio.h>
// #include<string.h> 再带入strlen(arr) 即可
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bai";
	printf("%d", my_strlen(arr));
	return 0;
}