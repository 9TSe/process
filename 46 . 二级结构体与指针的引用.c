#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct sb 
{
	char furname;
	int length;
};//ע����ð��
struct abc
{
	struct sb b;
	int age;
	char name[20];
};
int main()
{
	struct abc s = { {'b',180},18,"baishuyuan"}; //��ʼ���ṹ���û�����,��Ϊ�������ټ�һ�������ż���;����֮���ö��Ÿ���
	               ////�����ű�ʾֻ��һ���ַ�,˫���ű�ʾ��βΪ\0��һ��,˫����Ҳ�������õ��ַ�ͬ���βΪ\0

	struct abc* a = &s;
	//��ӡ�����ṹ�е��������ַ�������(furname)
	printf("%c\n", (*a).b.furname);
	printf("%c\n", a->b.furname); //֮���Բ�ʹ������ -> ��Ϊ�ṹb����Ϊָ��
}