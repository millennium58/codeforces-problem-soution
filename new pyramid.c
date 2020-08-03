#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("how many number: ");
    scanf("%d",&n);
    k=2*n+1-2;
    for(i=0;i<k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(j==1+i||j==k-i)
                printf("%d",n);
                else
                printf(" ");
        }

        printf("\n");

    }
}



