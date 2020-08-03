#include<stdio.h>
int main()
{
    char s[50],temp=0;
    int n,t,i=0,j;
    scanf("%d%d",&n,&t);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&s[i]);
    }
      for(j=1;j<=t;j++)
    {
       for(i=0;i<=n-2;i+3)
       {
        if(s[i]=='b' && s[i+1]=='g')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;

            }

       }

    }
    printf("%s",s);


}
