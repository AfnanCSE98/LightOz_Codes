#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

#define mp make_pair
#define pb push_back
#define PI (acos(-1.0))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)

typedef long long ll;
typedef long double ld;
typedef double db;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef multiset<int> msi;
typedef map<int,int> mii;

const int maxn=1e5+5;
const int MOD=1e9+7;
const int INF = 1e9;
main()
{
    ll t,i,j,x=0;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a&1)
        {
            cout<<"Case "<<++x<<": Impossible"<<endl;
        }
        else
        {
            ll t=a/2;
            while(!(t&1))
            {
                t=t/2;
            }
            cout<<"Case "<<++x<<": "<<t<<" "<<a/t<<endl;
        }
    }
}
