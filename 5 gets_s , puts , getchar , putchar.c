#include <stdio.h>
#define CH 20
int main()
{
    char ch[CH];
    gets_s(ch, CH - 1); //gets_s可完全替代gets函数 ,不必要再使用 scanf("%[^\n]",ch)  函数
    puts(ch); //可完全替代 printf("%s",ch) 等 %s 字符串类型打印
    
    char a = getchar();  //可完全替代  scanf("%c",&a) 等函数
    putchar(a); // 可完全代替 printf("%c",a) 等 %c 单字符类型打印
    return 0;
}
