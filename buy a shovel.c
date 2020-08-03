#include<stdio.h>
int main()

{
    int i,value=0,r=0,x=0,t;
    scanf("%d%d",&value,&r);
    if(r==value)
    {
        x=value/r;
    }
    else if(value<r)
    {
        if(r%value==0)
        {
            x=r/value;
        }
        else
            {

        for(i=1; i<=1000; i++)
        {
            if((10*i)%value==0)
            {
                x=(10*i)/value;
                break;

            }
            else if(((10*i)+r)%value==0)
            {
                x=((10*i)+r)/value;
                break;

            }
            else
                continue;

        }
            }
    }
    else
    {

        for(i=1; i<=1000; i++)
        {
            if((10*i)%value==0)
            {
                x=(10*i)/value;
                break;

            }
            else if(((10*i)+r)%value==0)
            {
                x=((10*i)+r)/value;
                break;

            }
            else
                continue;

        }
    }
    printf("%d",x);
}
