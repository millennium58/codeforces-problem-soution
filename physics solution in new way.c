#include<stdio.h>
int main()
{
    int x,y,z,n,i,j,sum=0,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d%d%d",&x,&y,&z);

        sum1=sum1+x;
        sum2=sum2+y;
        sum3=sum3+z;
    }
    if(sum1==0&&sum2==0&&sum3==0)
        printf("yes");
    else
        printf("no");
}


