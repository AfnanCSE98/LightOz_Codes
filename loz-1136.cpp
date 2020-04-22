#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define PI (acos(-1.0))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)

typedef long long ll;
typedef long double ld;
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
ll pera(ll n)
{
    ll x=(n/3)*2;
    if(n%3==2)x++;

    return x;
}
int main()
{
    int t,i;ll j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll a,b;
        cin>>a>>b;

        ll ans=pera(b)-pera(a-1);

        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
