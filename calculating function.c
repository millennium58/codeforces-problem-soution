#include<stdio.h>
int main()
{
   long long int n,i,sum=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(-1,i)*i;
    }
    printf("%lld",sum);

    getch();
}
