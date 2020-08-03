#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,t,k,count=1,n,min=0,max=0,mount=1;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&t);
        for(j=0; j<t; j++)
        {
            scanf("%d",&arr[j]);
        }
    }



    for(i=1; i<=n; i++)
    {

        for(j=0; j<t; j++)
        {
            if(arr[j+1]-arr[j]<=2)
            {
                count++;

           }

            else if(arr[j+1]-arr[j]>2)
            {
               // j=j+1;
                k=j+1;
                for(k=j+1;j<=t;j++)
                         if(arr[j+1]-arr[j]<=2)
            {
                mount++;

            }

            }

        }
        if(mount>count)
        {
            max=mount;
            min=count;
        }
        else if(count>mount)
        {
            max=count;
            min=mount;
        }
        else
        {
            max==min;

        }
        printf("%d \n%d",min,max);
        min=0;
        max=0;
    }
}
