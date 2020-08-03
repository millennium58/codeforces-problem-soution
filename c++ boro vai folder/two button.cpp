#include<iostream>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int i=1;
    while(n!=m)
    {
        if(n*2==m)
        {
            cnt++;
            break;
        }
        else if(n*2<m)
        {
           int j=1;
         while(n*2<m)
         {
             n=n*2;
             cnt++;
             j++;
         }
        }
        else
           {
            n=n-1;
            cnt++;
           }
        i++;


    }
    cout<<cnt<<endl;
}
