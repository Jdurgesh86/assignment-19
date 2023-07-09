#include <stdio.h>
#include<string.h>

int main()
{   
    int n,flag=0;
    printf("Enter the number of Email addresses\n");
    scanf("%d",&n);
    char str[n][50];
    char s1[50];
    int i,j,count;
    printf("Enter %d mail addresses:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    printf("\nThe odd one email address is:\n");
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='@')
            {
                flag=1;
            }
        }
        if(flag==0)
            {
                puts(str[i]);
            }
    }
    return 0;
}