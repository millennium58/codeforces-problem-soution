#include<stdio.h>
int main()
{
    int i,a,b,c,temp=0;
    int arr[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    a=arr[3]-arr[0];
    b=arr[3]-arr[1];
    c=arr[3]-arr[2];
    printf("%d%d%d",a,b,c);
}
