#include<stdio.h>
int main()
{
    long long int i,j,r,n,value,sum=0;

    scanf("%lld",&n);
    long long int a[n],b[n];
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld",&a[i],&b[i]);

    }
    for(i=1; i<=n; i++)
    {


        r=a[i]%b[i];
        if(r>0)
        {
            value=b[i]-r;
            r=0;
        }
        else if(r==0)
        {
            value=r;
        }





        printf("%lld\n",value);
        value=0;
    }
}






