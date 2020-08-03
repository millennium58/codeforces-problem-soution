#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=pow(2,i);j++)
        {
           printf("*");
        }
        printf("\n");
    }
}
