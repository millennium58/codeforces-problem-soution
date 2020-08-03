#include<stdio.h>

int main()
{
    int n,h,i;
    long long int sum=0;
   scanf("%d%d",&n,&h);
   int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
            sum+=1;
        else if(a[i]>h)
            sum=+2;
    }
 printf("%lld",sum);
    getch();
}
