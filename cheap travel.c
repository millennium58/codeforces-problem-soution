#include<stdio.h>
int main()
{
    int n,a,b,m,bmin=0,amin=0,r,x;
    scanf("%d%d%d%d",&n,&m,&a,&b);

    if(m>=n)
    {
        bmin+=b;
        amin+=a*n;

    }
    if(n>m)
    {
        amin=n*a;
       if(n%m==0)
       {
           x=n/m;
           bmin=x*b;
       }
       else if(n%m!=0)
       {
        x=n/m;
        bmin+=b*x;
        r=n%m;
        if(b<=a*r)
        {
            bmin+=b;
        }
        else
        {
            bmin+=a*r;
        }
       }

    }
    if(bmin<=amin)
    {
        printf("%d",bmin);
    }
    else
        printf("%d",amin);
}


