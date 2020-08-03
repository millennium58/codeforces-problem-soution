#include<stdio.h>
int main()
{
    int i,n,k,cnt=0,j=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0; i<n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<n; i+0)
    {

        if(i+a[i-1]==k)
        {
            cnt++;
            break;
        }
        else
            i=i+a[i-1];
        printf("%d",i);
    }


    if(cnt==1)
    {
        printf("YES");
    }
    else
        printf("NO");



}
