#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	int ws = 0;
	int a = num;
	int count = 0;
	int i = a;
    if (num != 0)
    {
        while (i > 0)
        {
            i = i / 10;
            ws++;
        }
        int p = pow(10, ws - 1);

        while (p != 0)
        {
            int m = num / p;
            if (m == 0)
            {
                count += 6;
            }
            else if (m == 1)
            {
                count += 2;
            }
            else if (m == 2)
            {
                count += 5;
            }
            else if (m == 3)
            {
                count += 5;
            }
            else if (m == 4)
            {
                count += 4;
            }
            else if (m == 5)
            {
                count += 5;
            }
            else if (m == 6)
            {
                count += 6;
            }
            else if (m == 7)
            {
                count += 3;
            }
            else if (m == 8)
            {
                count += 7;
            }
            else if (m == 9)
            {
                count += 6;
            }
            num %= p;
            p /= 10;
        }
        printf("%d", count);
    }
	else
	{
		printf("6");
	}
	return 0;
}
