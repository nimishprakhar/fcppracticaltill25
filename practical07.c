#include <stdio.h>

void main()
 {
    int range, i, large;

    printf("Enter the size of the array: ");
    scanf("%d", &range);

    if (range <= 0)
    {
        printf("Invalid input\n");
    } 
    else
     {
        int arr[range];

        printf("Enter the elements of the array:\n");
         for (i = 0; i < range; i++)
{
        scanf("%d", &arr[i]);
        large = arr[i];
            if (large < arr[i]) {
                large = arr[i];
            }
        }

        printf("The largest element in the array is %d\n", large);
    }
}