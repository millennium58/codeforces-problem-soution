#include<stdio.h>
int main()
{
    int a,b,value=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a-b;
        if(a==1)
        {
            value=0;
        }
        else if(a%2==0)
        {
            value=a/2;
        }
        else if(a%2==1)
        {
            value=a/2;
        }
        printf("%d %d",b,value);

    }
    else if(b>a)
    {
        b=b-a;
        if(b==1)
        {
            value=0;
        }
        else if(b%2==0)
        {
            value=b/2;
        }
        else if(b%2==1)
        {
            value=b/2;
        }
        printf("%d %d",a,value);
    }
    else
        printf("%d %d",a,value);

}
