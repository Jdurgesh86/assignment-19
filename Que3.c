#include<stdio.h>
int main()
{
    char string[10][20];
    printf("Enter 10 fruits name:\n ");
    for(int i=0;i<10;i++)
        gets(string[i]);
    printf("You Enter the 10 Fruits names are :\n");
    for(int i=0;i<10;i++)
    {
        puts(string[i]);
    }
}