#include<stdio.h>
int main()
{
    int x,y,w,r,i;
    scanf("%d%d",&x,&y);
    for(i=1;i<=10;i++)
    {
r=x*3;
        w=y*2;
        if(r>w)
        {
            break;
        }
        x=r;
        y=w;
    }
    printf("%d",i);
}
