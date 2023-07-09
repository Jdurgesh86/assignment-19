#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[4][2][20] = {{"deepak", "qwe"}, {"dipu", "123"}, {"chandan", "45678"}, {"bharan", "123456"}};
    char username[] = "deepak";
    char password[] = "qwe";
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(username, str[i][0]) == 0 && strcmp(password, str[i][1]) == 0)
        {
            printf("Username and Password are Matching");
            a = 1;
        }
    }
    if (a == 0)
        printf("Username and Password are Not Matching");

    return 0;
    getch();
}