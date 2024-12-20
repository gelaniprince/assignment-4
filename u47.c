#include <stdio.h>

int cmp(char *p , char *p1);

int main()
{
    char str1[50],str2[50];
    int result;

    printf("Enter the string 1 : ");
    scanf("%s", str1);

    printf("Enter the string 2 : ");
    scanf("%s", str2);

    result = cmp(str1,str2);

    if (result == 1)
    {
        printf("Strings are same ");
    }
    else
    {
        printf("Strings are not same ");
    }
    
    

    return 0;
}

int cmp(char *p , char *p1)
{
    while (*p != '\0' )
    {
        if (*p != *p1)
        {
            return 0;
        }
        
        p++;
        p1++;
    }
    return 1;
}