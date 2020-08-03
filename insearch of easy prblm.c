#include<stdio.h>
int main()
{
    int n,i,count=0,mount=0;
    scanf("%d",&n);
    int a[n];
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
        else if(a[i]==1)
            mount++;
    }
    if(count==n)
    {
        printf("EASY");
    }
    else if(mount<=n)
    {
        printf("HARD");
    }
}
