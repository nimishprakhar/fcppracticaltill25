#include <stdio.h>
void main()
{ int n,factorial=1,i;
    printf("enter the number whose factorial you want");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
     factorial = factorial*i;
    }
    printf("the factorial of %d is %d",n,factorial);
    


}