#include<stdio.h>
int main()
{
    int n,i,j,count=0,mount=0;
    scanf("%d",&n);
    int arr[200];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
       if(arr[i]%2==0)
        count++;

       else
        mount++;

    }
    if(count>mount)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                printf("%d",i+1);
                break;
            }
        }
    }

    else
     {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                printf("%d",i+1);
                break;
            }
        }
    }

}


