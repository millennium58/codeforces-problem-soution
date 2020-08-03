#include<stdio.h>
int main()
{
    int i,j,min=0,max=0,count=0,n,r,temp=0,lemp=0,z;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
      if(arr[i]>max)
        max=arr[i];

    }
        r=i;
        printf("%d",r);
      min=arr[0];
    for(i=1;i<n;i++)
    {
      if(arr[i]<max)
        min=arr[i];

      }
      printf("%d",min);

      z=i;
      printf("%d",z);
}


