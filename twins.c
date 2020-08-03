#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,a,n,temp=0,sum=0,jum=0,k=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }



        }
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           jum=jum+arr[j];
        }
      sum=sum+arr[i];

       if(sum>jum)
       {
           break;
       }
      jum=0;

    }

          printf("%d",i+1);
    }






