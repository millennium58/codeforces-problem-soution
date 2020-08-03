#include<stdio.h>
int main()
{
 int a,b,c,d,i,n,j;
    scanf("%d",&i);
  while(i>0)
  {
       i++;
       a=i%10;
       b=(i/10)%10;
       c=((i/10)/10)%10;
       d=(((i/10)/10)/10)%10;
       if(a!=b&&a!=b&&a!=c&&a!=d&&c!=d&&c!=b&&d!=b)
        break;
  }




printf("%d",i);


}


