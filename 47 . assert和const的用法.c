#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<string.h> strcpy ��ͷ�ļ�
#include<assert.h>//assert ��ͷ�ļ�
void my_strcpy(char* dest, const char* str) //const д��*ǰ����Թ̶�ָ�����ʹ�䲻�ɸı�
                                            //���� * str = * dest ���޷�����
	                                        // const д��*������Թ̶�ָ��,ʹָ���޷��ı�ָ��
                                            //����   str = &arr1   ���޷�����
	                                        //�� const char * const str  ��ָ��str���������ɸı�Ҳ�޷��ı�ָ��
{
	assert(*dest != NULL);    // ��assert�б��ʽΪ����ᵼ������ʱ��������Ӷ����ڴӴ������ҵ�����
	assert(*str != NULL);     //�Ӷ����Ա����ָ�뵼�µ����й���
	                         
	while (*dest++ = *str++)  // \0 ��Ӧ��ASCILֵΪ 0 ��˿ɱ��ж�Ϊ��
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1,arr2 );

	/*strcpy(arr1, arr2);  strcpy�ɽ�arr2�е��ַ����ݵ�arr1�ж�arr2���ı�*/

	printf("%s\n",arr1);




	          //const ������ֵ�Ĺ̶�

	/*const int num = 0;
	num = 10;             ȡ����ע������ʾ����
	�����ȴ��ͨ��ָ������Ӹı�num

	int* p = &num;
	*p = 10;

	���ٴ�ͨ�� const �̶�

	const int* i = &num
	* i = 10;

	printf("%d\n", num);*/





	           //const����ָ��Ĺ̶�
	int a = 0;
	int b = 0;
	//const int* p = &a;  //��ʱ�޷�ͨ��*p���ı�a��ֵ
	//*p = 1;
	int* const p = &a; //��ʱ�޷��ı�ָ��pָ��ķ���
	p = &b;

	return 0;
}