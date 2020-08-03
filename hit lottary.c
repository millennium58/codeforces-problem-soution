#include<stdio.h>
int main()
{
    long long int i,cnt=0,value,r=0;
    int max[5]={100,20,10,5,1};
    scanf("%lld",&value);

    for(i=0;i<5;i++)
    {

        if(value>=max[i])
        {
            cnt+=value/max[i];
            r=value%max[i];
            value=r;

        }
        else if(value<max[i])
        {
            continue;
        }
        else if(value==0)
            break;




    }
     printf("%d",cnt);

}
