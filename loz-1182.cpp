#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;cin>>t;
    for(long long i=1;i<=t;i++)
    {
        long long n;
        cin>>n;
        int cnt=0;
        while(n)
        {
            cnt++;
            n=n&(n-1);
        }
        if(cnt&1)
        {
            cout<<"Case "<<i<<": odd"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": even"<<endl;
        }
    }
}

