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
bool chkint(double n)
{
    int t=n;
    if(t==n)return true;
    else return false;
}

int main()
{
    int test;
    int t=0;cin>>test;
    while(test--)
    {
        double r,n;cin>>r>>n;
        double angle=sin(PI/n);
        double ans=(r*angle)/(1+angle);
        if(chkint(ans)==false)printf("Case %d: %.10lf\n",++t,ans);
        else
        {
            printf("Case %d: %.0lf\n",++t,ans);
        }
    }
}
