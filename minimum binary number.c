#include<stdio.h>
int main()
{
    char str[100];
    int i,j,k,n;
    char temp=0;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        scanf("%c",&str[i]);
    }

    for(i=0;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }


        }
         printf("%c",str[i]);
    }


    for(i=0;i<=n;i++)
    {

        for(j=i;j<=n;j++)
        {



        }



}
