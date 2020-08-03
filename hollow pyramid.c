
#include<stdio.h>
int main()
{
    int i,j,k,x,n,p;
    printf("enter a value: ");
   scanf("%d",&x);
    n=x*2-1;

    for(i=x; i>=0; i--)
    {
     for(j=1;j<=n; j++)
        {
            if(j==i||j==n-i+1)

                printf("0");

            else
                 (" ");
        }
      printf("\n");


    }

}
