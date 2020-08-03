#include<stdio.h>
int main()
{
    int i,j,t;

    scanf("%d",&t);
    char s[t][100];
    int l[t];
    for(i=0; i<t; i++)
    {

        scanf("%s",s[i]);
    }
    for(i=0; i<t; i++)
    {
        l[i]=strlen(s[i]);

        if(l[i]<=2)
        {
            printf("%s",s[i]);
        }
        else if(l[i]>2)
        {
            for(j=0; j<l[i]; j++)
            {

                if(j==0)
                {
                    printf("%c",s[i][0]);
                }
                else if(j!=0)
                {

                    if(s[i][j]==s[i][j+1])
                    {
                        printf("%c",s[i][j]);
                        j+=1;

                    }
                    else if(s[i][j]!=s[i][j+1])
                    {
                        printf("%c",s[i][j]);
                    }

                }

            }
           // l=0;
        }
        printf("\n");



    }

}




