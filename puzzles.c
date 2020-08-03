#include<stdio.h>

int main()
{
    int i,max=0,min=0,s,p,value,j,temp;
    scanf("%d%d",&s,&p);
    int arr[p];
    for(i=0;i<p;i++)
    {
        scanf("%d",&arr[i]);
    }



    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    max=arr[p-1]-arr[0];
    printf("%d",max);
    min=max;

    for(i=s;i<=p;i++)
    {
        value=arr[i-1]-arr[i-s];
        if(value<min)
            min=value;
    }
    printf("%d",min);

}
