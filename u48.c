#include <stdio.h>

char res(char *p);

int main()
{
    char str[50];

    printf("Enter the string : ");
    scanf("%s", str);

    res(str);

    printf("This is reverse string = %s",str);

    return 0;
}

char res(char *p)
{
    char tem, *q;

    q = p;

    while (*q != '\0')
    {
        q++;
    }
    q--;

    while (p < q)
    {
        tem = *p;
        *p = *q;
        *q = tem;
        p++;
        q--;
    }
    

}