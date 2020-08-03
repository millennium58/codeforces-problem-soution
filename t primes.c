#include<stdio.h>
int main()
{
    int i,j,cnt=0,n,value=0;
    scanf("%d",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)

    {
        if(arr[i]<100000000)
        {

        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                cnt++;
            }
        }

        if(cnt==3)
            printf("YES\n");
        else
            printf("NO\n");
            cnt=0;
    }
    else
    {
         value=sqrt(arr[i]);
       for(j=2;j<value/2;j++)
       {
           if(value%j==0)
           {
               cnt++;
           }
       }
       if(cnt==0)
       {
           printf("YES");
       }
       else
        printf("NO");

        value=0;

    }

}
}
