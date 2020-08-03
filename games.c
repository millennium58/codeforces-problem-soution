#include<stdio.h>
int main()
{
    int i,n,count=0,x;
    scanf("%d",&n);
    x=n*2;
    int arr[205];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<x-3;i++)
    {
         if(arr[i]==arr[i+1]||arr[i]==arr[i+3])
        {
            count++;
        }
    }
    printf("%d\n",count);


}
