#include <stdio.h>

void main() 
{   int a, b,rev;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("value before swapping %d %d\n ",a,b);
    int *ptr1 = &a;
    int *ptr2 = &b;
    rev = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = rev;
    printf("Values after swapping: %d  %d\n", a,b);

}