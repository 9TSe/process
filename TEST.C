#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ad(x)
{
    int z = x * x;
    printf("%-9d", z);
}
int add(x)
{
    int zz = x * x * x;
        printf("%-9d\n", zz);
}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d", &a, &b, &c);
    printf("%-9d", a);
    ad(a);
    add(a);
    printf("%-9d", b);
    ad(b);
    add(b);
    printf("%-9d", c);
    ad(c);
    add(c);
    return 0;
}