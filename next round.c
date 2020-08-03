#include<stdio.h>
int main()
{
    int i,j,k,n,count=0,temp;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
            count++;
    }
    printf("%d",count);

   }
