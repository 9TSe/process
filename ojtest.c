#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[1000] = { 0 };
	int count = 0;
	scanf("%[^\n]%*c", arr);//gets(arr)得到的数组默认结尾不是如 %s (单纯用 %s 无法获取空格键 )的'\n' 而是'\0'
	                        //同样的,     scanf("%[^\n]", arr)     结尾得到的也是\0
	                        //也有        scanf("%[^\n]%*c",arr);  结尾得到的也是\0  这两者之间无区别,%*c 相当于无输入,只是规定其格式
	for (int i = 0; ; i++) 
	{
		if (arr[i] == '\0')
		{
			break;
		}
		if ((arr[i] >= 'a' && arr[i] <= 'z' )|| (arr[i] >= 'A' && arr[i] <= 'Z'))
		{
			count++;
			i++;
			if (arr[i] == '\0')
			{
				break;
			}
			while (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
			{
				i++;
				if (arr[i] == '\0')
				{
					break;
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}

