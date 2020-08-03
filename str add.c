#include<stdio.h>
int main()
{
    char s[]="millennium", s1[]="rahman" ,s2[20];
    int i=0,j=0,k,l=0,m=0;
    while(s[i]!='\0')
    {
        l++;
    }
    printf("%d\n",l);

        while(s1[j]!='\0')
    {
        m++;
    }
    printf("%d\n",m);

    for(i=0;i<=l;i++)
    {
        s2[j]=s[i];
    }
   for(k=0;k<=m;k++;j=l+1;j++)
   {
       s2[j]=s1[k];
   }
   printf("%s",s2);









}
