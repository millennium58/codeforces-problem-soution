#include<stdio.h>
int main()
{
    int i,j,temp=0;
    for(i=1;i<=8;i++)
    {
        for(j=i+2;j<=8;j+=2)
        {
            if(i%2==0)
            {
                temp=i;
                i=j;
                j=temp;
            }
            else
                continue;
        }
        printf("%d",i);
    }
}
