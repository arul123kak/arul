#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
a=4;
b=3;
c=6;
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
