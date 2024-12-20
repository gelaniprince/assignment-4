#include<stdio.h>


int find_max(int*a,int*b)
{

    if(*a>*b)
     return*a;
     else
     return*b;
}
void main()
{

    int num1,num2,max;

    printf(" enter a two number =");
    scanf("%d%d",&num1,&num2);

    max=find_max(&num1, &num2);

    printf(" maximum number between %d and %d is = %d",num1,num2,max);
}