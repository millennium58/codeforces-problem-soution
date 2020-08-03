#include<stdio.h>
int main()
{
    int b,g,i,temp=0,j=0;
    scanf("%d%d",&b,&g);
    int boy[b],girl[g];

    for(i=0;i<b;i++)
    {
        scanf("%d",&boy[i]);
    }

      for(i=0;i<g;i++)
    {
        scanf("%d",&girl[i]);
    }

   // boys sorting:

   for(i=0;i<b;i++)
   {
       for( j=i+1;j<b;j++)
       {
           if(boy[i]<boy[j])
           {
               temp=boy[i];
               boy[i]=boy[j];
               boy[j]=temp;
           }
           printf("%d",boy[i]);
       }
   }

}
