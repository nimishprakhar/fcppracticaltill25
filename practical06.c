#include <stdio.h>

    void printOddIndexedElements(int arr[], int size);
void printOddIndexedElements(int arr[], int size) 
{
    printf("Odd-indexed elements: ");
    for (int i = 1; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) {
        printf("Please enter a valid size.\n"); 
    }

    int arr[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printOddIndexedElements(arr, size);
}