#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;

        if(n==0){cout<<"0 0"<<endl;continue;}
        if(n==1){cout<<"1 0"<<endl;continue;}
        for(j=1;j<=n;j++)
        {
            if(n-j<=10)
            {
                cout<<j<<" "<<n-j<<endl;
                break;
            }
        }
    }
}
