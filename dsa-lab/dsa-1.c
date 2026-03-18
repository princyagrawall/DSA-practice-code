#include <stdio.h>

void insertIntoSortedArray(int* arr, int* n, int value){
    int i;
    for (i = *n - 1; (i >= 0 && arr[i] > value); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = value;
    (*n)++;
}
int main() {
    int n = 5;
    int arr[10] = {64, 34, 25, 12, 22};

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    insertIntoSortedArray(arr, &n, 25);
    printf("Array after insertion: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");       

    return 0;
}