 #include <stdio.h>

void main() {
    int n, element1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Please enter a valid size.\n");
    }
    int arr[n];
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; ++i) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &element1);
    int found = 0;
    int position = 0; 

    for (int i = 0; i < n; ++i) {
        if (arr[i] == element1) 
        {
            found = 1;
            position = i;
            break; // Exit the loop if the element is found
        }
    }

    if (found) 
    {
        printf("Element %d found at position %d.\n", element1, position + 1);
    } 
    else 
    {
        printf("Element %d not found in the array.\n", element1);
    }
}