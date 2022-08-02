#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			
		}
	case 999:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d,n = %d\n", m, n);
	return 0;
}
