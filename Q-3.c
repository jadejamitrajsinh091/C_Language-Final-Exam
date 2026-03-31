#include <stdio.h>


int main()
{
    int size;
    int sum = 0;


    printf("Enter 1D Array Size: ");
    scanf("%d", &size);

    int a[size];


    printf("Enter elements:\n");
    for(int i = 0; i < size; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for(int i = 0; i < size; i++)
    {  
        sum = sum + a[i];
    }


    printf("\nSum = %d\n", sum);


    printf("Reverse Array:\n");
    
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}