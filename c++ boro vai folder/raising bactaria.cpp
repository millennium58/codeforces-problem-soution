#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int num;
    cin>>num;
    int value=0,i,cnt=0,l=0;
    int r[100];
    for(i=0; num>0; i++)
    {

        r[i]=num%2;
        num/=2;
    }

    for(i=i-1; i>=0; i--)
    {
        l++;
    }

    for(i=0; i<=l-1; i++)
    {
        if(r[i]==1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;


}


