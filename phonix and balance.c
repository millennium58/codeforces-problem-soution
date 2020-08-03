#include<stdio.h>
int main()
{
   long long int i,j,value1=0,value2=0,k;
    long long dif=0;
    int t;
    scanf("%d",&t);
    long long int num[t][105];
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
        for(j=0; j<arr[i]; j++)
        {
            num[i][j]=pow(2,(j+1));

        }
        if(arr[i]==2)
        {
            dif=2;
            printf("%lld\n",dif);
        }
        else
        {

            for(k=0; k<(arr[i]/2)-1; k++)
            {

                value1+=num[i][k];
            }

            for(k=((arr[i]/2)-1); k<=(arr[i]-1); k++)
            {
                if(k==(arr[i]-1))
                {
                    value1+=num[i][k];
                    break;
                }
                else
                    value2+=abs((num[i][k]));
            }

            dif=(value1-value2);
            printf("%lld",dif);
            value1=0;
            value2=0;
            dif=0;


        }
    }
}




