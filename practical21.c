#include <stdio.h>

void main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; 

    // a. Increment a pointer
    printf("a. Increment a pointer:\n");
    printf("Original Value: %d\n", *ptr);
    ptr++;
    printf("After Increment: %d\n\n", *ptr);
    ptr = &arr[1];

    // b. Decrement a Pointer
    printf("b. Decrement a pointer:\n");
    printf("Original Value: %d\n", *ptr);
    ptr--; 
    printf("After Decrement: %d\n\n", *ptr);

    
    ptr = arr;

    // c. Add an integer to a pointer
    printf("c. Add an integer to a pointer:\n");
    printf("Original Value: %d\n", *ptr);
    ptr = ptr + 2; 
    printf("After Adding 2: %d\n\n", *ptr);

    
    ptr = &arr[4];

    // d. Subtract an integer from a pointer
    printf("d. Subtract an integer from a pointer:\n");
    printf("Original Value: %d\n", *ptr);
    ptr = ptr - 2; 
    printf("After Subtracting 2: %d\n\n", *ptr);

    // e. Subtract two pointers of the same type
    printf("e. Subtract two pointers of the same type:\n");
    int *ptr2 = arr + 3; 
    printf("Pointer 1 Value: %x\n", ptr);
    printf("Pointer 2 Value: %x\n", ptr2);
    printf("Difference between Pointers: %ld\n", ptr2 - ptr);

}