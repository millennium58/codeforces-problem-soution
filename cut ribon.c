#include<stdio.h>
int main()
{
    int i,sum=0,j,cnt=0,temp=0;
    int n,r=0;
    scanf("%d",&n);

    int arr[100];
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }


    }


    for(i=0;i<3;i++)
    {

        if(n>=arr[i])
        {
            cnt+=n/arr[i];
            r=n%arr[i];
            n=r;

            for(j=i+1;j<3-1;j++)
            {
              if(n==0&&arr[j]==arr[j+1])
              {
                      if(arr[i]+r!=arr[j])
                        cnt-=1;

              }
              if(n==0&&arr[j]!=arr[j+1])
              {
                  if(arr[i]+r==arr[j])
                    break;

              }

            }

        }
        else if(n<arr[i])
        {
            continue;
        }
        else if(n==0)
            break;




    }
     printf("%d",cnt);

}















