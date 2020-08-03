#include<stdio.h>
int main()
{
     float k,n,s,p;
    float r,w,l;
    scanf("%f%f%f%f",&k,&n,&s,&p);
    r =ceil(n/s);


    l=r*k;
    w=ceil(l/p);
    printf("%.0f",w);

}
