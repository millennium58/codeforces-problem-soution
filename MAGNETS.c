#include<stdio.h>
int main()
{
   long long int n,i,count=1;
    scanf("%lld",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            count++;
    }
    printf("%lld",count);
}
