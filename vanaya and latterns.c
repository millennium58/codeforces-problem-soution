#include<stdio.h>
int main()
{
   long long int i,n,l,j,max=0,temp=0,count=0;
   double x,y,z,ans;
    scanf("%lld%lld",&n,&l);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }


    }

{

}    for(i=0;i<n;i++)
    {
        if(arr[i+1]-arr[i]>max)
        {
            max=arr[i+1]-arr[i];
        }
    }

    x=max/2.0;
    y=arr[0]-0.0;
    z=(double)l-arr[n-1];
    if(x>=y&&x>=z)
    {
        ans=x;
    }
    else if(y>=x&&y>=z)
    {
        ans=y;
    }
    else if(z>=x&&y>=z)
    {
        ans=z;
    }




  printf("%.10f",ans);



}
