
include <stdio.h>
int main() 
{
    int n,a[8],temp=0,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
       for(i=0;i<n;i++)
       {
           printf("%d  ",a[i]);
       }
}
