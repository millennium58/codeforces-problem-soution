#include<stdio.h>
int main()
{
    int n,i,j,p,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
      {
          if(i+j==n+i)
          {
              printf("0");
          }
     }
          for(j=2;j<=i;j++)
          {
              printf("%d",j-1);
          }
          for(j=2;j<=i;j++)
          {
             printf("%d",(i-j));
          }

        printf("\n");
    }
        for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n;j++)
      {
          if(i+j==n+i)
          {
              printf("0");
          }
    }
          for(j=2;j<=i;j++)
          {
              printf("%d",j-1);
          }
          for(j=2;j<=i;j++)
          {
              printf("%d",i-j);
          }

        printf("\n");
    }
}
