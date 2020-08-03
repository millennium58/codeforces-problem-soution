#include<stdio.h>
int main()
{
    int i,j,sum=0,l1,l2;
    char str1[100];
    char str2[100];
    scanf("%s",&str1);
    scanf("%s",&str2);
    l1=strlen(str1);


    for(i=0;i<l1;i++)
    {
        if(str1[i]=='1'&&str2[i]=='1')
        {
            str1[i]='0';
        }
        else if(str1[i]=='1'&&str2[i]=='0')
        {
            str1[i]='1';
        }
        else if(str1[i]=='0'&&str2[i]=='1')
        {
            str1[i]='1';
        }
         else if(str1[i]=='0'&&str2[i]=='0')
        {
            str1[i]='0';
        }


    }
    printf("%s",str1);

}




