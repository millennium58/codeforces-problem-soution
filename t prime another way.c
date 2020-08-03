#include<stdio.h>
int main()
{
    int i,j,cnt=0,n;
    int value;
    scanf("%d",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }


    for(i=0;i<n;i++)
    {
       value=sqrt(arr[i]);
       for(j=2;j<value/2;j++)
       {
           if(value%j==0)
           {
               cnt++;
           }
       }
       printf("%d",cnt);

       if(cnt==0)
       {
           printf("YES");
       }
       else
        printf("NO");
       //value=0;
    }
}


