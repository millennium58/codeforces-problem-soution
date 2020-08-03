#include<stdio.h>
int main()
{
    int i,n,j,cnt=0,mnt=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==-1)
        {
            cnt++;
        }


        else if(a[i]>=1)
        {
            for(k=1;k<=a[i];k++)


            for(j=i+1; j<=n; j++)
            {
                if(a[j]==-1)
                {
                    mnt++;
                   // j=j;
                    break;
                }


            }


        }
    }
    printf("%d%d",cnt,mnt);

    printf("%d",cnt-mnt);
}
