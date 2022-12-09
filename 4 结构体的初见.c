#include<stdio.h>
struct baishuyuanps
{
	int age;
	char name[20];
	float weight;
	int score;
};
int main()
{
	struct baishuyuanps s = { 18,"baishuyuan",102,1433223 };
	printf("1:%d\n%s\n%lf\n%d\n", s.age, s.name, s.weight, s.score);
	struct baishuyuanps * pc = &s;
	printf("2:%d\n%s\n%lf\n%d\n", (*pc).age, (*pc).name, (*pc).weight, (*pc).score);

	printf("3:%d\n%s\n%lf\n%d\n", pc->age, pc->name, pc->weight, pc->score);

	return 0;
}
