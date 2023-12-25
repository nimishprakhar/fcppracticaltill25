#include <stdio.h>
void main()
{
    int sum = 0 ,i,n;
    printf("enter the max limit");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
 printf("%d",sum);
}