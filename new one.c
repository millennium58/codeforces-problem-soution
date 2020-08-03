#include<stdio.h>
int main()
{
    int x,n,y,r;
    scanf("%d",&x);
    if(x==4)
    {
        y=x/4;
    }
     else if(x==3)
    {
        y=x/3;
    }
     else if(x==2)
    {
        y=x/2;
    }
      else if(x==1)
    {
        y=x/1;
    }
     else if(x>=5)
    {
        r=x%5;
        y=x/5;

           if(r==4||r==3||r==2||r==1)
           {
               y++;
           }
    }

    printf("%d",y);
}
