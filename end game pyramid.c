#include<stdio.h>
int main()
{
    int i,j,n,k,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        }
        for(j=2;j<=n*2-2*i;j++)
        {
            printf("#");
        }

        for(j=1;j<=i;j++)
        {
        printf("*");
        }

    printf("\n");

}
}
}
