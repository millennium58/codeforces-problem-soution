#include<stdio.h>
int main()
{
   long long int i,j,a,b,k,sum=0;
   int n;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&k);

      for(j=1; j<=k; j++)
        {
            if(j%2==1)
            {
                sum=sum+a;
            }
            else if(j%2==0)
            {
                sum=sum-b;
            }
        }
        printf("%lld\n",sum);
        sum=0;

   }
}
