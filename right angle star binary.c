#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("0");
            }
            else
                printf("1");
            }
            printf("\n");
    }
}
