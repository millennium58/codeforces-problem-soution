#include<stdio.h>
int main()
{
    int h,w,b,n,i,l=20,count=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%d%d%d",&h,&w,&b);

         if(h<=l&&w<=l&&b<=l)
    printf("yes");
     else if(h>l || w>l || b>l)
        printf("no");

 }


 }



