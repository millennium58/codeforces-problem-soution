#include<stdio.h>
int main()
{
    int i,cnt=0,mnt=0,n;
    scanf("%d",&n);
    int m[n],c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&m[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m[i]-c[i]>0)
        {
            mnt++;
        }
        else if(c[i]-m[i]>0)
        {
            cnt++;
        }
        else
            cnt+=0;
            mnt+=0;
    }
    if(mnt>cnt)
    {
        printf("Mishkat");
    }
    else if(cnt>mnt)
    {
        printf("Chris");
    }
    else
        printf("Friendship is magic!^^");
}
