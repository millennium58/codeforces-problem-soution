#include<stdio.h>
int main()
{
    char str[105];
    int i,n,j;
    int l[105];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",&str);

    l[i]=strlen(str);
    }
    for(i=1;i<n;i++)
    {


        if(l[i]>10)
        {

            printf("%c",str[0]);
            printf("%d",(l[i]-2));
            printf("%c",str[l[i]-1]);

        }
        else if(l[i]<=10)
            printf("%s",str);


    }
}

