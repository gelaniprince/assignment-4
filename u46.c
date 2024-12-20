#include<stdio.h>
void main ()
{
    int a[5];
    int b[5];
    int *pa=a;
    int *pb=b;

// enter a value by user in array of a

    for (int i = 0; i < 5; i++)
    {
        printf(" enter value = ");
        scanf("%d",&a[i]);
    }

 // array copy 

    for (int i = 0; i < 5; i++)
    {
        *(pb + i) = *(pa + i);
    }
            
// print array b using pointer

    printf("after a copy :");
    
     for(int i = 0; i < 5; i++)
    {
        printf(" %d",*(pb + i));
    }
    printf("\n");

}