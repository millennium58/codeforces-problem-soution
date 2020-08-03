#include<stdio.h>
int main()
{
    int x=0,i,b,a,n,value=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
    }
    for(i=1;i<=n;i++)
    {
        value=x+b-a;

        if(value>x)
        {
            x=value;
        }
        printf("%d",x);
    }
   // printf("%d",value);
}
