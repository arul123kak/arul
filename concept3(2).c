#include<stdio.h>
void main()
{
int a[50],i,b,max;
printf("enter the range");
scanf("%d",&b);
printf("enter the array values");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
