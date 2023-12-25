#include <stdio.h>
int series(int n);
void main()
{   int n,i;
printf("enter the maximum limit of the series ");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
printf("%d term is %d \n",i,series(i));
}
}
int series(int n)
{if (n<2)
return n; 
else
return series(n-1)+series(n-2);
}