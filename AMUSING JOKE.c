#include<stdio.h>
int main()
{
    char str1[105],str2[105];
    int i,j,temp=0,n,l,count=0;
    scanf("%s%s",&str1,&str2);
    char str3[220];
    scanf("%s",&str3);


    strcat(str1,str2);
    n=strlen(str1);
    l=strlen(str3);

    if(n==l)
    {

    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }



    }

    for(i=0; i<=l; i++)
    {
        for(j=i+1; j<=l; j++)
        {
            if(str3[i]>str3[j])
            {
                temp=str3[i];
                str3[i]=str3[j];
                str3[j]=temp;
            }
        }




    }
    j=0;
    for(i=0; i<=n; i++)
    {
        if(str1[i]==str3[j])
        {
            count++;
             j++;

        }

    }

    if(count-1==n)
        printf("YES");
    else
        printf("NO");
    }
    else
        printf("NO");


}
