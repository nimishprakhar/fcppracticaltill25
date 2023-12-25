#include <stdio.h>
void main()
{
    int i,size,sum=0;
    printf("enter the size of element :");
    scanf("%d",&size);
    if (size<=0)
    {
    printf("invalid intput");
    }
    else
    {int arr[size];
    printf("enter each element of array\n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    } 
}
printf("the sum of array is %d",sum);
}