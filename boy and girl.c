#include<stdio.h>
int main()
{
    char s[105];
    int i,j,l,cnt=1;
    char temp=0;
    gets(s);
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }

        }


    }


    for(i=0; i<l-1; i++)
    {
        if(s[i]!=s[i+1])
            cnt++;
    }

    if(cnt%2==0)
    {
        printf("CHAT WITH HER\n");
    }
    else
        printf("IGNORE HIM\n");

    getch();
}




