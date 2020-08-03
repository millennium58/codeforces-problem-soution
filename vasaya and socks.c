#include<stdio.h>
int main()
{
    int i,sum=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        sum+=1;
        if(sum%m==0)
        {
            sum+=1;
        }
        else
            continue;
    }
    printf("%d",sum);
}
