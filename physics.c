#include<stdio.h>
int main()
{
    int arr[100][100];
    int i,j,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }

       for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
           sum=sum+arr[i][j];
        }
    }
    if(sum==0)
    {
        printf("yes");

    }
    else
        printf("no");
}
