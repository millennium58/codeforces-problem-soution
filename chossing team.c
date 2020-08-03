#include<stdio.h>
int main()
{
    int n,k,i,cnt=0,value=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i]+=k;
         if(a[i]<=5)
        {
            cnt++;
        }
    }

    if(cnt<3)
    {
        printf(0);
    }
    else if(cnt>=3)
    {
        value=cnt/3;
    }
    printf("%d",value);
}
