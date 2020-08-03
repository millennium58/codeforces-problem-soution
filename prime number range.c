#include<stdio.h>
int main()
{
    int i,j,n,flag=0;
    printf("enter a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
   if(i%j!=0  || i==j)
    flag++;



        }
        if(flag==2)
        printf("%d",i);
    }



       // if(flag==2)

       // printf("%d",i);

    }
//}



