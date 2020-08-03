#include<stdio.h>
int main()
{
    int a,b,x,i,cad=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=1000;i++)
    {
    if(a<b)
    {
        cad+=a;
        break;
    }
    else if(a>=b)
    {
            x=a-b;
        a=a-b+1;
        if(x>=0)
        {
            cad+=b;
        }

        if(a<b)
        {
            cad+=a;
            break;
        }
    }
    }
    printf("%d",cad);
}
