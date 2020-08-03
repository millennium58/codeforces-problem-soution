#include<stdio.h>
int main()
{
 int s,m,i,sum=0,l,r;
 scanf("%d%d",&m,&s);
 i=0;
    while(s!=0)
    {
        r=s%10;
        s/=10;
        sum+=r;
        i++;
    }
}
