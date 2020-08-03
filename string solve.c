#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[100];
    int i,l;
   gets(str1);
   l=strlen(str1);
   for(i=l;i<0;i--)
   {
       print("%c",str1[i]);
   }
}

