#include<stdio.h>
int main()
{
    char s[700];
    int i,l,n,count=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        scanf("%c",&s[i]);
    }

    l=strlen(s);
    for(i=0; i<=l-2; i++)
    {
        if(s[i]=='R'&&s[i+1]=='R' ||s[i]=='B'&&s[i+1]=='B'||s[i]=='G'&&s[i+1]=='G')
            count++;

    }
    printf("%d",count);

}
