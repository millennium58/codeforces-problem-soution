#include<stdio.h>
int main()
{
    int i,n,j,x=0;
    printf("entre a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        x++;
            printf("%d ",x);
    }
    printf("\n");
}
}
