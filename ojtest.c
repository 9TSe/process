#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

void maxLenStr(char* str[], int n, int* max) 
{
    for (int i = 1; i < n; i++) 
    {
        if (strlen(str[i]) > strlen(str[*max])) *max = i;
    }
}

int main() 
{
    char* str[101], s[82];
    int i, max = 0;
    for (i = 0; strcmp(s, "****") != 0; i++)
    {
        getchar();
        scanf("%[^\n]", s);
        str[i] = (char*)malloc(sizeof(char) * strlen(s));
        strcpy(str[i], s);
    }
    maxLenStr(str, i, &max);
    puts(str[max]);
    return 0;
}


