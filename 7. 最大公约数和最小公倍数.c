#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int GCD(int a, int b) //求出最大公约数
{
    return a % b ? GCD(b, a % b) : b;
}
int LCM(int a, int b)  //求出最小公倍数
{
    return a * b / GCD(a, b);
}
//以上两个函数可以更简便的算出目的数
 int main()
 {
    int a, b, c, m, t;
    scanf("%d%d", &a, &b);
    if (a < b)
        {
            t = a;
            a = b;
            b = t;
         }                  //使得 a 总是大于 b
     m = a * b;             //取 a*b
     c = a % b;             //取 a模b
	
     while (c != 0)         //进行辗转相除法
         {
             a = b;         // 大数变小数
             b = c;         // 小数变模值
             c = a % b;     // 模值再变新模值
         }                  // 循环直到模值变为0
     printf("最大公约数是:\n%d\n", b);  //最后一次模值为最大公约数
     printf("最小公倍数是:\n%d\n", m / b);  //原两数乘积 除 最大公约数 即 为最小公倍数
 }
