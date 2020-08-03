
#include<stdio.h>
int main()
{
    int i,s,n,count=0,temp=0,j,remp=0;
    scanf("%d%d",&s,&n);
    int x[n],y[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
                remp=y[i];
                y[i]=y[j];
                y[j]=remp;
            }

        }


    }




    for(i=0; i<=n; i++)
    {
        if(s>x[i])
        {

            s=s+y[i];
            count++;
        }
        else if(s<x[i])
        {
            break;
        }
    }
    if(count==n)
    {
        printf("YES");
    }
    else
        printf("NO");
}

