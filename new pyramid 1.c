#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("how many number: ");
    scanf("%d",&n);
    k=2*n+1-2;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==i||i==k-1||j==i||j==k-1)
                printf("%d",n);
                else
                    printf(" ");
        }
        printf("\n");
    }
}
