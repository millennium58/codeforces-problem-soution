#include<stdio.h>
int main()
{
    long long int  a,b;;
    long long int x,y,z;
    scanf("%lld%lld%lld",&x,&y,&z);

    if(x%z==0)
    {
        a=x/z;
    }
    else if(x%z!=0)
    {
        a=y/z;
        a++;
    }
    if(y%z==0)
    {
        b=y/z;
    }
    else if(y%z!=0)
    {
        b=y/z;
        b++;
    }

    printf("%lld",a*b);

}

