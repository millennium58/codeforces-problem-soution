#include<stdio.h>
int main()
{
    int i,j,n,sum=0,temp=0;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
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
   const int k=a[n-1];

    for(i=0;i<n-1;i++)
    {
        sum=sum+(k-a[i]);
    }
   printf("%d",sum);
}
