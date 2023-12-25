#include <stdio.h>
void main()
{int a,b,swap;
    printf("enter first integer number :");
    scanf("%d",&a);
    printf("enter second integer number :");
    scanf("%d",&b);
    printf("first and second integer before swapping %d %d\n",a,b);
swap=a;
a=b;
b=swap;
printf("first and second integer after swapping %d %d",a,b);

}