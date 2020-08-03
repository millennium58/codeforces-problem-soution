#include<stdio.h>
int main()
{
    char str[100];
    int i,l,n;

    scanf("%s",str);
    l=strlen(str);



  for(i=0;i<l;i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!='Y')
        {
            if(str[i]<='Z')
                {
                 str[i]=str[i]+32;
                }

                printf(".%c",str[i]);

        }




}
printf("\n");
}


