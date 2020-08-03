#include<stdio.h>
int main()
{
    int i,j,k,n,count=0;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1&&b[i]==1 || a[i]==1 && c[i]==1 ||c[i]==1 && b[i]==1 || a[i]==1 && b[i]==1&&c[i]==1)
            count++;
    }
    printf("%d",count);
}


