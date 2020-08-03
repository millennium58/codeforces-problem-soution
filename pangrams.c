#include<stdio.h>
int main()
{
    int i,j,count=1,n,temp=0;
    scanf("%d",&n);
    char str[n];
    for(i=0; i<=n; i++)
    {
        scanf("%c",&str[i]);
        if(str[i]>=65&&str[i]<=91)
        {
            str[i]=str[i]+32;
        }


    }

    for(i=0; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        printf("%c",str[i]);

   }
   for(i=0;i<n;i++)
   {
       if(str[i]!=str[i+1])
        count++;
   }

 if(count-1==26)
    printf("YES");
    else
    printf("NO");


}
