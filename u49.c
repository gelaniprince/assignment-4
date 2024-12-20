#include <stdio.h>

void sort(int *arr, int n);

int main()
{
    int arr[] = {45,12,35,41,25};
    int n = 5;

    printf("Before sort the array \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    sort(arr,n);

    printf("After sort the array \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

void sort(int *arr, int n)
{
    int tem;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (*(arr + j + 1) < *(arr + j))
            {
                tem = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = tem;
            }
            
        }
        
    }
    
}