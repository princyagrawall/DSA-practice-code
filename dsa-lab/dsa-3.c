//reversing an array in c 
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before reversing:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Reversing the array
    for(i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("\nArray after reversing:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}