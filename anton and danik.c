#include<stdio.h>
int main()
{

    int i,j,l,n,count=0,mount=0;

    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
     for(i=0; i<n; i++)
    {

    if(s[i]=='A')
        {
            count++;
        }
        else if(s[i]=='D')
        {
            mount++;
        }

    }


    if(count>mount)
    {
        printf("Anton");
    }
    else if(mount>count)
    {
        printf("Danik");
    }
    else if(count==mount)
    {
        printf("Friendship");
    }
    return 0;

}






