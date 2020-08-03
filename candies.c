#include<stdio.h>
int main()
{
int t,i,k,x,j;
long long int sum=0;
scanf("%d",&t);
long long int n[t];
for(i=0;i<t;i++)
{
    scanf("%d",&n[i]);
      for(j=1;j<=n[i];j++)
    {
        for(k=1;k<=j+1;k++)
        {
            sum+=pow(2,(k-1))*j;
            if(sum==n[i])
            {
                break;
            }
            else
                continue;
        }
    }
    printf("%d",j);
    j=1;
}

}


