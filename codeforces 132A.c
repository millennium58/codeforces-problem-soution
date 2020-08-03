#include<stdio.h>
int main()
{
    int arr[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&i);
    }
    for(j=0;j<=i;j++)
    {
        if(arr[j]==1)
            printf("-1");
        else if(arr[j]!=0&&arr[j+1]!=0&&arr[j]%arr[j+1]!=0)
            printf("%d",arr[j]);
    }


}
