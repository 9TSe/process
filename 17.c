#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	switch (i)
	{
	case 1:
			printf("111");
			break;//停止(若无break则继续进行case2)
	case 2:
		    printf("222");
	}
	return 0;
}
