#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input = 0;
	printf("打死我\n");
	printf("打脸么（0/1）？");
	scanf("%d", &input);
	if (input == 1)
		printf("多帅的脸\n");
	else
		printf("屁事多\n");
	return 0;
}
