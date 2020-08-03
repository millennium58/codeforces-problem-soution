#include<stdio.h>
int main()
{
    char str[100];
    char str1[100];
    int i,j,count=0,l=0;
    gets(str);
    gets(str1);

    for(i=0;i<='\0';i++)
    {
        str[i]=str[i]+32;
        count=count+str[i];
    }
    for(j=0;j<='\0';j++)
    {
        str[j]=str[j]+32;
        l=l+str[j];
    }


    if(count>l)
        printf("1");
    else if(count<l)
        printf("-1");
    else
        printf("0");
}

