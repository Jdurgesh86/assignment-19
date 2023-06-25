#include<stdio.h>
int main()
{
    char str[5][10],count=0;
    printf("Enter the 5 strings: ");
    for(int i=0;i<5;i++)
        gets(str[i]);

    for(int i=0;i<5;i++)
        for(int j=0;str[i][j]!='\0';j++)
            if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u')
                count++;
    printf("The total number of vowels in the strings are %d",count);
}