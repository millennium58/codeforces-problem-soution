#include<stdio.h>
int main()
{
    int i;
    char s[1000];
    scanf("%s",&s);
    int l=strlen(s);

    if(s[0]<=95&&s[0]>=123)
    {
        s[0]=s[0]-32;
    }





    for(i=0; i<l; i++)
    {

        if(s[0]>=95&&s[0]<=123)
        {
            s[0]=s[0]-32;
        }


    }
    printf("%s",s);



}
