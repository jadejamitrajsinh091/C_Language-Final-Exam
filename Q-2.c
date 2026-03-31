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

    printf("%d",sum);


    return 0;
}