#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt=0,i,j;
    cin>>t;
    int arr[t],num[1000];
    for(i=0;i<t;i++)
    {
        cin>>arr[i];

            for(j=0;j<arr[i];j++)
        {
            cin>>num[j];
        }
        for(j=0;j<arr[i];j++)
        {
            if(j%2==num[j]%2)
            {
                cnt++;
            }
            else
                continue;
        }
        if(cnt==0)
        {
            cout<<-1<<endl;
        }
        else
            cout<<cnt;
       }


    }



