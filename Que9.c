#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][10]={"durgesh","mohit","parth","atul","vaibhav"};
    char user[10];
    printf("Enter the user name: ");
    gets(user);
    for(int i=0;i<5;i++)
    {
        if(strcmp(str[i],user)==0)
        {
            printf("The user is authorized ! Acess granted\n");
            printf("Enter the number to calcuate the factorial\n");
            int num,fact=1;
            scanf("%d",&num);
            for(int i=2;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("The factorial of %d is %d",num,fact);
            return 0;
        }
    }
    printf("The user is unauthorized");
}