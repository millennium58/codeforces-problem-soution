#include<stdio.h>
int main()
{
    int i,j,value=0,value1=0,temp=0,min=0;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
      //  printf("%d",a[i]);
    }
    const int k=a[1];
    value=k-a[0];
    value1=a[2]-k;
    min=value+value1;
    printf("%d",min);

}
