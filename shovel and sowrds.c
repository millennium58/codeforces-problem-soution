#include<stdio.h>
int main()
{
   long long int s,d,t,p,i,j;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld",&s,&d);
               if(s==d)
        {
            p=s/2;
            printf("%lld\n",p);
        }
        else if(s<=d/2)
        {
            p=s;
           printf("%lld",p);

        }
        else if(s>d/2)
        {

          p=d/2;
          printf("%lld",p);
        }
           else if(d<=s/2)
        {
            p=d;
           printf("%lld",p);

        }
        else if(d>s/2)
        {

          p=s/2;
          printf("%d",p);
        }

}
}
