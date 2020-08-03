#include<stdio.h>
int main()
{
   int h,w,i;
   scanf("%d%d",&h,&w);
   int arr[w];
   for(i=0;i<w;i++)
   {
       scanf("%d",&arr[i]);
   }
   long long int count=arr[0]-1;
   for(i=0;i<w-1;i++)
   {
       if(arr[i]>arr[i+1])
       {
           count+=h-(arr[i]-arr[i+1]);
       }
       else if(arr[i]<arr[i+1])
       {
           count+=arr[i+1]-arr[i];
       }
   }
   printf("%lld",count);

}
