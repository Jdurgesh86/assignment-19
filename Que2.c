#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
int main()
{
    int i, j;
    char str[10][20], st[20];
    printf("enter 10 cities name\n");
    for (i = 0; i < 10; i++)
    {
        gets(str[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                // fflush(stdin);
                strcpy(st, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], st);
            }
        }
    }
    printf("*******************************\n");
    for (i = 0; i < 9; i++)
        printf("%s\n", str[i]);
}