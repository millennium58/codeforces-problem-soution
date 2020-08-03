#include<stdio.h>
int main()
{
    int i,j,k,count=0,p,q;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&p,&q);
        if(q-p>=2)
            count++;
    }
    printf("%d",count);
}
