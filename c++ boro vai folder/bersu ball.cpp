#include<iostream>
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int b,g,i=0,j=0,cnt=0;
    cin>>b;
    int boy[b];
    for(i=0; i<b; i++)
    {
        cin>>boy[i];
    }
    sort(boy,boy+b);
    cin>>g;
    int girl[g];
    for(i=0; i<g; i++)
    {
        cin>>girl[i];
    }
    sort(girl,girl+g);

    for(i=0; i<b; i++)
    {
        for(j=0; j<g; j++)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                cnt++;
                girl[j]=10000;
                break;
            }
        }
    }
    cout<<cnt<<endl;


}
