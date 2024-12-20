#include<stdio.h>

int calc(int*a,int*b,int*sum,int*sub,int*mul,float*div)
{
    *sum=*a+*b;
    *sub=*a-*b;
    *mul=*a**b;
    if(b!=0)
        *div = (float)(*a)/ *b;
    else
    *div = 0;
}





void main()
{
    int a,b,sum,sub,mul;
    float div;

    printf("\n enter a number : ");
    scanf("%d",&a);
    printf(" \n enter a number : ");
    scanf("%d",&b);

    calc(&a,&b,&sum,&sub,&mul,&div);

    printf(" sum = %d",sum);
    printf(" sub = %d",sub);
    printf(" mul = %d",mul);
    printf("div = %.2lf",div);
}
