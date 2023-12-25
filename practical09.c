#include <stdio.h>
int max ,i , min;
int maximum(int arr[],int n);
int minimum(int arr[],int n);
float avg(int arr[],int n);
int maximum(int arr[],int n)
{
for ( i = 0; i < n; i++)
if (max<arr[i])
{max=arr[i];
}
return max;
}
int minimum(int arr[],int n)
{min=arr[0];
for (i = 1; i < n; i++)
if (min>arr[i])
{min=arr[i];
}
return min;
}
float avg(int arr[],int n)
{float sum=0;
float avg;
for ( i = 0; i < n; i++)
{
sum=sum+arr[i];
}
avg=sum/n;
return avg;
}
void main()
{int size;
    printf("enter the size of array");
    scanf("%d",&size);

    if (size<=0)
{
printf("invalid input");
}
int arr[size];
printf("enter the element of matrix\n");
for ( i = 0; i < size; i++)
{scanf("%d",&arr[i]);
}

printf("value of maximum element in the array is %d\n",maximum(arr,size));
printf("value of minimum element in the array is %d\n",minimum(arr,size));
printf("average of sum of value in array is %f\n",avg(arr,size));
} 