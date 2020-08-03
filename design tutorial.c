#include<stdio.h>
int main()
{
    int i;
    const int n;
    int j,value=0,cnt=0,mnt=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        value=n-i;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                cnt++;
            if(value%j==0)
                mnt++;
        }
        if(cnt>= 3&&mnt>=3)
        {

            break;
        }
        cnt=0;
        mnt=0;


    }
    printf("%d %d",i,value);
}

