#include<stdio.h>
int main()
{
    int i,n;
    double sum=0.0 ;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);


    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    sum=sum/n;

    printf("%.12lf",sum);

}
