
#include<stdio.h>
int main()
{
int start,end,i;
scanf("%d %d",&start,&end);
for(i=start;i<=end;i++)
{
if(i%2!=0)
{
printf("\n%d",i);
}
}
return 0;
}
