#include<stdio.h>
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int arr3[10];
    int i,j=0,temp=0;
    for(i=0;i<=4;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=4;i<10;i++)
    {
        arr3[i]=arr2[j];
        j++;

    }
   for(i=0;i<=10;i++)
   {
       printf("%d",arr3[i]);
   }

}
