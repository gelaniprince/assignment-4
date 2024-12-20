#include<stdio.h>
void main ()
{
    int n;

    printf("enter a number's of element in array = ");
    scanf("%d",&n);

    int arr[n];
    int *ptr = arr;

    printf(" enter %d element :",n);
    for (int i = 0; i < n; i++)
    {           
        printf("element %d : ",i+1);
        scanf("%d",ptr + i);
    }
     printf("array elements are :");
     for ( int i= 0; i < n; i++)
     {
        printf(" element %d = %d",i+1,*(ptr + i));
     }
     


}