#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char S[1000] = { 0 };
	char T[1000] = { 0 };
	scanf("%s\n%s", &S, &T);
	int V[52] = { 0 };
	int s = strlen(S);
	int t = strlen(T);
	for (int i = 0; i < s; i++)
	{
		if (S[i] >= 'a' && S[i] <= 'z')
		{
			V[S[i] - 'a'] = 1;
		}
		else
		{
			V[S[i] - 'A' + 26] = 1;
		}
	}
	for (int j = 0; j < t; j++)
	{
		if (T[j] >= 'a' && T[j] <= 'z')
		{
			if (V[T[j] - 'a'])
			{
				printf("Yes");
				return 0;
			}
		}


		else
		{
			if (V[T[j] - 'A' + 26])
			{
				printf("Yes");
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}