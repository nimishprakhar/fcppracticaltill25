#include <stdio.h>

int main() 
{   int n;
    printf("Enter order of square matrix e.g if it is 3x3 then write 3 only ");
    scanf("%d", &n);
    int a[n][n];
    int i, j;

    printf("Enter matrix one:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    printf("Sum of diagonal elements is:\n");
    for (i = 0; i < n; i++) 
    {
             sum = sum+a[i][i] ;  
    }
    printf("%d ", sum);

    return 0;
}