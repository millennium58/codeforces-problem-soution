#include<stdio.h>
int main()
{
    int i,t,j,k;
    scanf("%d",&t);
    int sum1=0,sum2=0;
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=2;j<=a[i];j+=2)
        {
            sum1=sum1+j;
        }
        for(k=1;k<a[i];k+=2)
        {
            if(k==a[i]-1)
            {
                k=k+a[i]/2;
                if(k%2==0)
                {
                    break;
                }
                else
                    sum2=sum2+k;
            }
            else
                sum2=sum2+k;
        }
        if(sum1==sum2)
        {
            printf("yes\n");
            for(j=1;j<=a[i];j++)
            {
                if(j%2==0)
                    printf("%d",j);
                else
                    if(j==a[i]-1)
                {
                    j+=a[i]/2;
                     // printf("%d",j);
                }
                printf("%d",j);

            }
        }
        else
            printf("no\n");
        sum1=0;
        sum2=0;
    }

}


