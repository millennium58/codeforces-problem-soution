#include<stdio.h>
int main()
{
    int a,b,c,max,i,t=0;
    int a[6];

    scanf("%d%d%d",&a,&b,&c);
    a[0]=a+b*c;
    a[1]=a*(b+c);
    a[2]y=a*b*c;
    a[3]=(a+b)*c;
    a[4]=a+b+c;
    a[5]=(a*b)+c;

    max=a[0];

    for(i=1;i<6;i++)
    {
        if(a[i]>max)
           t=max;
           max=a[i];
           a[i]=t;
    }
    printf("%d",max);

}
