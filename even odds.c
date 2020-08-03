#include<stdio.h>
int main()
{
 long long int i,k,n,value,output=0;
 scanf("%lld%lld",&n,&k);
 if(n%2==0)
 {
     value=n/2;
 }
 else
 {
     value=n/2+1;
 }
 if(value>=k)
 {
     output=2*k-1;
     printf("%lld",output);
 }
  if(value<k)
 {
     output=(k-value)*2;
     printf("%lld",output);
 }


}
