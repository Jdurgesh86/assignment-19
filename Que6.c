#include<stdio.h>
#include<string.h>

int pallindrome(char* string);
int main()
{
    char str[5][10];
    int i;
    printf("Enter the 5 city names ");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("The following strings are pallindrome: ");
    for(i=0; i<5; i++)
    {
        if(pallindrome(str[i])==1)
        {
            printf("%s",str[i]);
            printf("\n");
        }
    }
}
int pallindrome(char *string)
{
    int n;
    for( n=0;string[n]!='\0';n++);
    char revstring[n];
    strcpy(revstring,string);
    for(int i=0;i<n/2;i++)
    {
        char temp;
        temp=string[i];
        string[i]=string[n-i-1];
        string[n-i-1]=temp;
    }
    
    if(strcmp(string,revstring)==0)
        return 1;
    return 0;
}