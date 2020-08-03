#include<iostream>
using namespace std;
int main()
{
    int i,x=0,y=0,z=0,t1[1000],t2[1000],t3[1000],w=0,s=0;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            t1[x]=i+1;//implement the index;
            x++;

        }
        else if(a[i]==2)
             {
            t2[y]=i+1;//implement the index;
            y++;
             }
          else if(a[i]==3)
            {
            t3[z]=i+1;//implement the index;
            z++;

            }
    }
    s=min(x,y);
    w=min(s,z);
    cout<<w<<endl;
    for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++)
    {
        cout<<t1[x]<<" "<<t2[y]<<" "<<t3[z]<<endl;
    }
}
