#include<bits/stdc++.h>
using namespace std;
// pi=acos(-1.0)
int main()
{
    int i,t;
    cin>>t;
    double r,pi=acos(-1.0);
    for(i=1;i<=t;i++)
    {
        cin>>r;
        double ans=r*(4.0*r-pi*r);
        printf("Case %d: %.2lf\n",i,ans);

    }
}
