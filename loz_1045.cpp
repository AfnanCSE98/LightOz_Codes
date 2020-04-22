#include<bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define PI (acos(-1.0))
#define FOR(i,a,n) for (int i=(a);i<(n);++i)

typedef long long int ll;
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
const int INF = 1e6+5;
db ara[INF];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(false);

    int test,n,b;
    int t=0;
    cin>>test;
    for(int i=1;i<=INF ;i++ )
    {
        ara[i]=ara[i-1]+log(i);
    }
    while(test--)
    {
        int n,b;
        cin>>n>>b;
        db logofb=ara[b]-ara[b-1];
        ll ans=ara[n]/logofb +1 ;
        printf("Case %d: %ld\n",++t,ans);
    }
}
