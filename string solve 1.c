#include<stdio.h>
int main()
{
    char str1[100],str2[100],count=0;
    int i,l,j,n;
    gets(str1);
    gets(str2);
   l=strlen(str1);
   n=strlen(str2);
 for(i=0,j=n-1;i<=l-1,j>=0;i++,j--)
 {
     if(str1[i]==str2[j])
        count++;
 }

if(count==l)

    printf("YES");

else
    printf("NO");
}
