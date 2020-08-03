#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count=0,l;

    for(i=1; i<=4; i++)
    {
        scanf("%s",&str);
        l=strlen(str);


        if(l==4)
        {
            printf("case %d hajj e akbar",i);
        }
        else
            printf("case %d hajj e umrah",i);
    }

}

