#include<stdio.h>
int main()
{
    char s[100];
    int i,l,count=0,j;
    gets(s);

    l=strlen(s);
    for(i=0;i<=l-5;i++)
    {
        if(s[i]=='h'&&s[i+1]=='e'&&s[i+2]=='l'&&s[i+3]=='l'&&s[i+4]=='o')
            count++;
    }
    if(count>=1)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}
