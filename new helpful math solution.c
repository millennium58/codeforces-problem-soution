#include<stdio.h>
int main()
{
    char str[100];
    int i,j,l,temp=0;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i+2)
    {
        for(j=i+2;j<l;j+2)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

           }
        }
          printf("%s",str);
    }
  //
}
