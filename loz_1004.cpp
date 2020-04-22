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

const int maxn=3e5+5;
const int MOD=1e9+7;
const int INF = 1e9;
int a[201][201];
int dp[201][201];
int n;
int grab(int i,int j)
{
    if(a[i][j]==0)return 0;
    if(i==2*n-2)return a[i][j];
    if(dp[i][j]!=-1)return dp[i][j];

    int x1 = a[i][j]+grab(i+1,j);
    int x2 = a[i][j]+grab(i+1,j+1);

    dp[i][j] = max(x1 , x2);
    return dp[i][j];

}
main(){
    int tc;cin>>tc;int nc=0;
    while(tc--)
    {
        cin>>n;
        memset(dp, -1, sizeof(dp));
        memset(a, 0, sizeof(a));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                cin>>a[i][j];
            }
        }
        int rono=1;
        for(int i=n;i<2*n-1;i++)
        {
            for(int j=rono;j<n;j++)
            {
                cin>>a[i][j];
            }
            rono++;
        }
        cout<<"Case "<<++nc<<": "<<grab(0,0)<<endl;
    }
}
