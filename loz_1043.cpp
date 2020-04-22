#include<bits/stdc++.h>
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
int main()
{
    int test,t=0;cin>>test;
    while(test--)
    {
        db x,y,z,onupat;
        cin>>x>>y>>z>>onupat;
        db tmp=(onupat+1.0)/onupat;
        db ans=x/sqrt(tmp);
        printf("Case %d: %.10lf\n",++t,ans);
    }
}
