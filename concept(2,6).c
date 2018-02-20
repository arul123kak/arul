
#include <stdio.h>
#include<math.h>
int main()
{
int n,m;
scanf("%d %d",&n,&m);
for(int j=n;j<m;j++)
{int count=0;
for(int i=2;i<j;i++)
{
if(j%i==0)
count++;
}
if(count==0)
{
	printf("%d\n",j);
}

}
	

