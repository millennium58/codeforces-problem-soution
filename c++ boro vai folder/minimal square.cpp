#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int main()
{
    int i,j,t,r=0;
    cin>>t;
    int a[t],b[t],mini[t];
    int side[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        cin>>b[i];
       side[i]=min(max(a[i]*2,b[i]),max(a[i],b[i]*2));
       mini[i]=side[i]*side[i];




        cout<<mini[i]<<endl;
    }
}
