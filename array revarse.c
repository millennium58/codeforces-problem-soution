#include<stdio.h>
int main()
{
    char str[100];
    int i,j,l,count=1;
    char temp=0;
    gets(str);
    l=strlen(str);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i]>str[j])
            {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }

        }

    }
    printf("%s",str);

    for(i=0;i<l-1;i++)
    {
        if(str[i]!=str[i+1])
            count++;
    }

    if(count%2==0)
    {
        printf("CHAT WITH HER");
    }
    else
        printf("IGNORE HIM");
}
