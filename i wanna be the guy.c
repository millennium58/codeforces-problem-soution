#include<stdio.h>
int main()
{
  int i,j,p,q,n,temp=0,count=0;
  int a[200];
  int b[200];
  scanf("%d",&n);
  scanf("%d",&p);

  for(i=0;i<p;i++)
  {
      scanf("%d",&a[i]);
  }

  scanf("%d",&q);

  for(i=0;i<q;i++)
  {
      scanf("%d",&b[i]);
  }

  int c[200];
  j=0;
  for(i=0;i<p;i++)
  {
      c[j]=a[i];
      j++;
  }
  for(i=0;i<q;i++)
  {
      c[j]=b[i];
      j++;
  }
  for(i=0;i<p+q;i++)
  {
      for(j=i+1;j<p+q;j++)
      {
          if(c[i]>c[j])
          {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
          }
      }


  }
  for(i=0;i<p+q;i++)
  {
      if(c[i]!=c[i+1])
        count++;
  }
  if(count==n)
  {
      printf("I become the guy.");
  }
  else
    printf("Oh, my keyboard!");


}
