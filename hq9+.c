#include<stdio.h>
int main()
{
    char s[100];
    int i,count=0;
    scanf("%s",&s);
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
          count++;
          i++;

    }
    if(count>=1)
    {
        printf("YES");

    }
    else
        printf("NO");

}
