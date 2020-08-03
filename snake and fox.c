#include<stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {

             if((i+1)%4==2)
            {
                if(j==b-1)
                {
                    printf("#");
                }
                else
                    printf(".");
            }

             else if((i+1)%4==0)
            {
                if(j==0)
                {
                    printf("#");
                }
                else
                    printf(".");
            }
            else
                printf("#");

        }
        printf("\n");
    }
}
