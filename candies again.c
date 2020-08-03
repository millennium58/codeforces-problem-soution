#include<stdio.h>
int main()
{
int sum=0,j,k,i,x,p;
int t;

scanf("%d",&t);
long long int n[t];
for(i=0;i<t;i++)
{
    scanf("%lld",&n[i]);
    for(k=2;k<10e9;k++)
    {
      p=pow(2,k)-1;
      if(n[i]%p==0)
      {
            x=n[i]/p;
            break;
      }
        else
            continue;
    }
    printf("%d\n",x);
    x=0;

}


}

