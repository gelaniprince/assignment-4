#include <stdio.h>

void con(char *str1, char *str2);

int main()
{
    char str1[100], str2[50];

    printf("Enter the fist string : ");
    scanf("%s", str1);

    printf("Enter the second string : ");
    scanf("%s", str2);

    con(str1, str2);

    printf("This is concatenate string = %s", str1);

    return 0;
}

void con(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        str1++;
    }

    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 != '\0';
}