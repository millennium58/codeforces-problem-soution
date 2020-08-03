#include<stdio.h>
int main()
{
    int n,r,new_num=0,d;
    scanf("%d",&n);
    d=log10(n)+1;
   // printf("%d",d);
    for(int i=0;n!=0;i++)
    {
        r=n%10;
        n=n/10;
        if(i==d-1)
        {
            continue;
        }
        else
        {
            new_num=new_num*10+r;
        }
    }
    printf("%d",new_num);
}
