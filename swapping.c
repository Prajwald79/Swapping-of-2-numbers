#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("Enter the numbers to swap\n:");
scanf("%d%d",&a,&b);
printf("Before swapping a= %d amd b= %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping a= %d amd b= %d",a,b);
return 0;
}
