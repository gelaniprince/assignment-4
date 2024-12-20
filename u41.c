#include<stdio.h>

    void swap(int *a, int *b);

 int main()
 {
   int x,y;

   printf("\n enter a value = ");
   scanf("%d",&x);

   printf("\n enter a value = ");
   scanf("%d",&y);

   printf("\n before swapping : x = %d ,y = %d",x,y);

   swap(&x, &y);

   printf("\n after swapping : x = %d, y = %d",x,y);
 }

  void swap(int *a,int *b)
 {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;

 }