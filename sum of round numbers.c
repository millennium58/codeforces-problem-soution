#include<stdio.h>
int main()
{
    int n,i,j,t;
    int div[4]= {1000,100,10,1};
    int b[4];
    int a[4];

    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);

        for(j=0;j<4;j++)
        {
            if(arr[i]%div[j]!=0)
            {
                if(arr[i]>=div[j])
                {
                    a[i]=arr[i]/div[j];
                    arr[i]=arr[i]-a[i]*div[j];
                    b[j]=a[i]*div[j];
                    printf("%d ",b[j]);


                }
                else
                    continue;
            }
   else if (arr[i]%div[j]==0)
            {
                printf("%d 1",arr[i]);
                break;

            }


        }

    }
}

