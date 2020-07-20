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

int mat[20][20];
int dp[17][1<<17],n;
int set1(int mask , int pos){
     mask = mask|(1<<pos);
     return mask;
}
bool check(int mask , int pos){
    if(mask&(1<<pos)){return true;}
    else return false;
}
int fun(int r,int c){
    if(r>=n)return 0;
    if(dp[r][c]!=-1)return dp[r][c];

    int mx=-1,ans;
    for(int i=0;i<n;i++){
            if(check(c,i)==0)
            {
                ans = mat[r][i]+ fun(r+1 , set1(c , i));
                mx=max(mx,ans);
            }
    }
    dp[r][c]=mx;
    return dp[r][c];
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc;cin>>tc;
    int nc=0;
    while(tc--)
    {
        cin>>n;
        memset(dp , -1 , sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        cout<<"Case "<<++nc<<": "<<fun(0,0)<<endl;
    }
}
