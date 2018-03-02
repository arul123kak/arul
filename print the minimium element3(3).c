#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
a=10;
b=5;
c=8;
if(a>b)
{
printf("b is minimum");
scanf("%d",&b);
}
if(b<c)
{
printf("b is minimum");
scanf("%d",&b);
}
printf("the minimum value is b");
}
