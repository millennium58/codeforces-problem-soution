#include<stdio.h>
int main()
{
    int i,j,count=0,l,temp=0;
    char str[2000];
    gets(str);
    l=strlen(str);
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        ;

    }
    for(i=0; i<l-1; i++)
    {
        if(str[i]==' '||str[i]== ','||str[i]=='{}')
        {
            continue;
        }
        else if(str[i]!=str[i+1])
        {
            count++;
        }
    }
    printf("%d",count-1);
}
