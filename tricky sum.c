#include<stdio.h>
int main()
{
    long long int i,j,k,n,sum=0,sum2=0,sum3=0;
   int t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);

        for(j=1; j<=n; j++)
        {
            sum=j*(j+1)/2;

                for(k=0; k<j; k++)
            {
                if(j==pow(2,k))
                    sum2=sum2+j;
            }
        }
        sum3=sum-(sum2*2);
        printf("%lld\n",sum3);
       sum=0;
       sum3=0;
       sum2=0;


    }

}










