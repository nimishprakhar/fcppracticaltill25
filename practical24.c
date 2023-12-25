#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a valid size.\n");
    
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
    }
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    free(arr);
}