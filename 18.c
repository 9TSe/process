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
			//这里加不加break效果都一样,直接从该局部switch跳出,不全部终止
		}
	case 999:   //直接跳入这里,并不是判定第一个  switch(n)  之后选择进入该case
		m++;
		break;
	default:
		break;
	}
	printf("m = %d,n = %d\n", m, n);
	return 0;
}
