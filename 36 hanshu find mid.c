#include<stdio.h>
int find_it(int x[],int k)
{
	int left = 0;
	int right = (sizeof(x) / sizeof(x[0])) ; //���������right��1  �ں�����ʹ�� sizeof ֻ��Ϊ1 ������ԭ��
	int mid = (left + right) / 2;            //��һ����c�У���������Ϊ������ʱ����˻�Ϊָ�룬
	                                         //��һ����ַ��ȡ��С�أ������32λϵͳ�Ļ���Ϊ4�������64λϵͳ�Ļ�Ϊ8��
		                                     //�����أ��ں�����sizeof��ȡ����ָ��ĳ��ȶ���������ĳ��ȡ�
		     //�ڶ��أ��ں����У�sizeof�Ĵ���ʱ����ڱ����ڣ�Ҳ����˵���ڶ�̬���ɵ������С�ǲ�����sizeof��������ġ�
	while (left <= right)        //��ȷ��ʽ���ں������������鳤��
		if (x[mid] = k)
		{
			return mid;
			break;
		}
		else if (x[mid] <= k)
		{
			left = mid;
			mid = (left + right) / 2;
		}
		else if (x[mid] >= k)
		{
			right = mid;
			mid = (left + right) / 2;
		}
		else
		{
			return -1;
		    break;
		}
            
}
int main()
{
	int a[] = {1,2,3,4,5};
	int key = 10;
	
	if (find_it(a,key) != -1)
	{
		printf("the number's under is : %d", find_it(a,key));
	}
	else
	{
		printf("nothing");
	}

	return 0;
}