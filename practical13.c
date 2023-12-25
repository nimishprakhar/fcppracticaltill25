#include<stdio.h>
int main()
{
    char str[50], rev[50]; int length=0, j;
    printf("Enter a String\n");
    scanf("%s",&str);
    while(str[length]!='\0')
    {
        length++;
    }
    for(int i=length-1 ,j=0 ;i>=0 ; i--,j++)
    {
        rev[j] = str[i];
    }
    rev[length]='\0';
    printf("Reversed String is %s\n",rev);

}