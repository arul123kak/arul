
#include<stdio.h>
int main()
{
int n,m,sum=0,a,i;
scanf("%d",&n);
a=n;
for(i=0;n>0;i++)
{
m=n%10;
sum=sum+m*m*m;
n=n/10;
}
if(sum==a)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}

