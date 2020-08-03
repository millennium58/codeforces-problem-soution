#include<stdio.h>
int main()
{
    int n,b,a,count=0;
    float max=.001;

    scanf("%d",&n);


    for(b=1; b<n; b++)
    {
        for(a=1; a<=b; a++)
            if(b+a==n && a<b && a%b!=0 )
            {
                if(max<b/a)
                {

                    max==b/a;
                    count++;
                }
                if(count==1)
                    printf("%d %d",a,b);

            }

    }

}
