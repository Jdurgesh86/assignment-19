#include<string.h>
#include<stdio.h>
int main()
{
    char ip[5][20];
    printf("Enter the 10 ip addresses :");
    for(int i=0;i<5;i++)
    {
        scanf("%s",ip[i]);
    }
    printf("The valid ip addreses are:\n");
    for(int i=0;i<5;i++)
    {
        int stoint=0,flag=1,count=0;
        for(int j=0;j<strlen(ip[i]);j++)
        {
            if(ip[i][j]!='.')
            {
                int temp=ip[i][j];
                temp=temp-48;
                stoint=temp+stoint*10;
            }
            if(ip[i][j]=='.'||ip[i][j+1]=='\0')
            {
                if(stoint<0 || stoint>255)
                flag=0;
                stoint=0;
                count++;
            }
        }
    if(flag&&count==4)
        printf("%s\n",ip[i]);
    }
}

