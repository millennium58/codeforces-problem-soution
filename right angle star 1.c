#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            prinntf("*");
        }
        printf("\n");
    }

}
