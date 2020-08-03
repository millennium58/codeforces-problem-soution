#include<stdio.h>
int main()
{
    int t,k,value=0,i,n,count=0;
    scanf("%d%d",&n,&k);
    t=240-k;
    for(i=1;i<=n;i++)
    {
        value+=5*i;
        if(value<=t)
        {
            count++;
        }
        else
            break;
    }
    printf("%d",count);

}
