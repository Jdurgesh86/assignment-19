#include <stdio.h>
#include<string.h>

int main()
{  
    int n;
    printf("Enter the number of strings\n");
    scanf("%d",&n);
    char str[n][50];
    int i;
    for(i=0;i<=n;i++)
    {
        fgets(str[i],50,stdin);
    }
    char str1[50];
    char str2[50];
    printf("Enter the word 1st:\n");
    fgets(str1,50,stdin);
    printf("Enter the word 2nd:\n");
    fgets(str2,50,stdin);
    int count=0,temp=0;
    for(i=0;i<=n;i++)
    {
        if(strcmp(str[i],str1)==0)
        {
            count++;
        }

        if(count>1&& temp<count)
        {
            temp=i;
        }
        if(strcmp(str[i],str2)==0)
        {
            if(i>=n/2)
                {
                    printf("the  n.2 minimum distance is %d",n-i);
                    return 0;
                }            
            break;
        }
    }
    printf("The minimum distance between is %d",i-temp);
    return 0;
}
