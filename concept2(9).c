#include<stdio.h>
int main()
{
    int n,fact=1,i;
printf("factorial of given number");
scanf("%d",&fact);
for(i=1;i<=5;i++)
{
    fact=fact*i;
printf("%d",i);
}
}
