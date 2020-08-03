#include<stdio.h>
int main()
{
    long long int x,k,r,y=0,i;
    scanf("%lld%lld",&x,&k);
    for(i=1;i<=k;i++)
    {
        r=x%10;
        if(r==0)
        {
            y=x/10;
             x=y;

        }



        else if(r!=0)
        {
            y=x-1;
            x=y;
        }

    }
   printf("%lld",x);
}
