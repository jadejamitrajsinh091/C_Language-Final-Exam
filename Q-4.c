#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;


    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d] = ", i);
        scanf("%d", (ptr + i));
    }

    
    printf("Cubes of elements:\n");

    for (int i = 0; i < n; i++)
    {
        int cube = (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i));
        printf("%d ", cube);
    }

    return 0;
}