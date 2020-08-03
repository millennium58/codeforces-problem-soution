#include<stdio.h>
int main()
{
    char str[100];
    int i,j,k,count=0,mount=0;
    gets(str);
    k=strlen(str);
    for(i=0;i<k;i++)
    {
        if(str[i]>=65&&str[i]<=91)
        {
           count++;
        }
         else if(str[i]>=97&&str[i]<=123)
        {
           mount++;
        }

    }
    if(count==k)
        printf("%s",str);
 else if (mount==k||mount<=count||mount>=count)
 {
     strlwr(str);
     printf("%s",str);
 }

}
