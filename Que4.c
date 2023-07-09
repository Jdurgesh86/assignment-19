#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10],find[10];
    int i;
    printf("Enter the 5 city names ");
    for(i=0;i<5;i++)
    {
        gets(str[i]);
    }
    printf("Enter the city name you want to find: ");
    scanf("%s",find);
     for(i=0; i<5; i++)
   {
     if(strcmp(find, str[i]) == 0)
     {
       printf("Found in row-%d\n", i+1);
       break;
     }
   }
    if(i==5)
    {
        printf("%s is not in the array of string ",find);
    }
    
}