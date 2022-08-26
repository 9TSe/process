#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> // rand 的引用
#include <time.h>   //srand(time)的引用
void menu()
{
	printf("            ###############################\n");
	printf("            #########   1.play   ##########\n");
	printf("            #########   0.exit   ##########\n");
	printf("            ###############################\n");
	printf("                    please chose one       \n");
}
void game()
{
	printf("                      ok let we do\n");
	int end = rand() % 100 + 1;//生成随机数
	int answer = 0;

	while (1)
	{
		scanf("%d", &answer);
		if (end == answer)
		{
			printf("                        gooddd!!!\n");
			break;
		}
		else  if (end < answer)
		{
			printf("                         so big\n");
		}
		else
		{
			printf("                        so small\n");
		}
	}
}
	int main()
	{
		int input = 0;
		srand((unsigned int)time(NULL));//生成随机数连同上,放在 main 函数下可使随机数在一局游戏中固定
		printf("          guess a number which is among 0 to 100\n");

		do
		{
			menu();
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("                    exit successful\n");
				break;
			default:
				printf("                 please try it again\n");
				break;
			}
		} while (input);
		return 0;
	}
