#include<stdio.h>
int main()
{
    int a,b,value,count=1,i,sum;
    scanf("%d%d",&a,&b);
    value=a*b;
   if(a%2==0&&b%2==0||a%2==1&&b%2==1)
   {
        if(a<b)
        {
            for(i=a;i<0;i--)
            {
                   while(value!=0)
       {
           sum=value-(i*2)+1;
           value=sum;
           count++;

       }
       }
         if(b<a)
       {
           i=b;
       while(value!=0)
       {
           sum=value-(i*2)+1;
           value=sum;
           count++;
           i--;
       }
            }
        }

