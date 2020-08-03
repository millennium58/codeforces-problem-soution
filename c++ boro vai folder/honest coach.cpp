#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j,k,mini=0,temp=0,result=0;
    cin>>t;
    int arr[t],s[100];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
        for(j=0;j<arr[i];j++)
        {
            cin>>s[j];
        }

        for(j=0;j<arr[i];j++)
        {
            for(int k=j+1;k<arr[i];k++)
            {
                if(s[j]>s[k])
                {
                    temp=s[j];
                    s[j]=s[k];
                    s[k]=temp;
                }
            }
            cout<<s[j];
        }
        mini=(s[1]-s[0]);
        for(j=1;j<arr[i]-1;j++)
        {
            if(mini>(s[j+1]-s[j]))
            {
                mini=(s[j+1]-s[j]);
            }
        }
        cout<<mini;
    }
}


