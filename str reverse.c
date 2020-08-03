#include<stdio.h>
int main()
{
 char str[100];
 gets(str);


    int i,j,l,temp=0;
    l=strlen(str);

    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i]>=str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }

        }
         printf("%c",str[i]);

    }



}
