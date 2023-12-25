#include <stdio.h>
int factorial(int n);
int factorial(int n)
 {if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}
void main() 
{int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) 
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
    }
    printf("Factorial of %d is: %d\n", num, factorial(num));
}