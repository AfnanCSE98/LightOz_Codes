/**Bismillahir Rahmanir Rahimm**/
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

const int maxn=10000007;
const int MOD=1e9+7;
const int INF = 1e9;
int dp[10010];
int a, b, c, d, e, f;
int fn( int n )
{
    if( n == 0 )
        return a;
    if( n == 1 )
        return b;
    if( n == 2 )
        return c;
    if( n == 3 )
        return d;
    if( n == 4 )
        return e;
    if( n == 5 )
        return f;
    ///return( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    else if(dp[n]!=-1)
    {
        return dp[n];
    }
    else
    {
        dp[n]=(fn(n-1)%maxn + fn(n-2)%maxn + fn(n-3)%maxn + fn(n-4)%maxn + fn(n-5)%maxn + fn(n-6)%maxn)%maxn;
        return dp[n];
    }
}
int main()
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);

    while( cases-- )
    {
         memset(dp,-1,sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n)%maxn);
    }
    return 0;
}
