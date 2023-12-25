#include <stdio.h>
void swap(int *a, int *b) 
{   int ptr = *a;
    *a = *b;
    *b = ptr;
}
void main()
{   int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Original values: num1 = %d, num2 = %d\n", a, b);
    swap(&a, &b);
    printf("Values after swapping: num1 = %d, num2 = %d\n", a, b);
}