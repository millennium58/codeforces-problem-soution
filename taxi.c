#include<stdio.h>
int main()
{

     int n,l1=0,l2=0,l3=0,l4=0,i,j,k,taxi=0;
    scanf("%d",&n);
     int arr[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i]==4)
        {
            l4++;
        }
        else if(arr[i]==3)
        {
            l3++;
        }
        else if(arr[i]==2)
        {
            l2++;
        }
        else if(arr[i]==1)
        {
            l1++;
        }
    }

    if(l4>0)
    {
        taxi=taxi+l4;
    }
   if(l3>l1)
    {
        taxi=taxi+l3;
        l1=0;
    }
    else if(l3<l1)
    {
        taxi=taxi+l3;
        l1=l1-l3;
    }
     else if(l3=l1)
    {
        taxi=taxi+l3;
        l1=l1-l3;
    }

     if(l2%2==0)
    {
        taxi=taxi+l2/2;
    }



   else if(l2%2!=0)
    {
        taxi=taxi+l2/2;
        l2=l2%2;

        if(l2<=l1)
        {
            taxi=taxi+l2;
            l1=l1-2;

        }
    }


      if(l1%4==0)
            taxi=taxi+l1/4;
        else if(l1%4!=0)
        {
            taxi=taxi+l1/4;
            l1=l1%4;
            if(l1<=3&&l1>=1)
            taxi=taxi+1;
        }

printf("%d",taxi);




    }











