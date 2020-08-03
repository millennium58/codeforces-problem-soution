#include<stdio.h>
int main()
{
    int count=1,n,i,max=0;
    scanf("%d",&n);
    int arr[n];
     for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>=0)
        {
            count++;


        }
        else if(arr[i+1]-arr[i]<0)
        {
           if(count>max)
           {
               max=count;
           }
           count=1;

        }


   if(count>max)
            max=count;


    printf("%d",max);
}
}
