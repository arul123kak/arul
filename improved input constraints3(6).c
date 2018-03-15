#include<stdio.h>
main()
{
int a[100],i,j,n=4,k=2,temp;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",i);
}
for(j=0;j<k;j++)
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d",a[i]);
}
