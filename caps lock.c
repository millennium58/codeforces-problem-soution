#include<stdio.h>
int main()
{
    char str[205];
    int i,j,k,l,count=0,mount=0;
    gets(str);
    l=strlen(str);

    for(i=0; i<l; i++)
    {
        if(str[i]>=65&&str[i]<=91)
            count++;
        else if(str[i]>=97&&str[i]<=123)
            mount++;
    }
    if(count==l)
        printf("%s",str);
    else if(mount>1)
        printf("%s",str);
    else if(count>mount)
    {
        printf("%s",str);
    }


    else if(count<l)
    {



        for(i=0; i<l; i++)
        {



            if(str[0]>=97&&str[0]<=123)
                str[0]=str[0]-32;
            else if(str[i]>=65&&str[i]<=91)
            {
                str[i]=str[i]+32;
            }

        }
        printf("%s",str);

    }

}
