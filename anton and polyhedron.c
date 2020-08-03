
#include<stdio.h>
int main()
{
    int i,n,sum=0,k;
    scanf("%d",&n);
    char str[1000];
    for(i=0;i<n;i++)
    {
      scanf("%s",str);
       if(str[0]=='I')
        {
            sum+=20;
        }
        else if(str[0]=='C')
        {
            sum+=6;
        }
        else if(str[0]=='T')
        {
            sum+=4;
        }
        else if(str[0]=='O')
        {
            sum+=8;
        }
         else if(str[0]=='D')
        {
            sum+=12;
        }
    }

    printf("%d",sum);

}
