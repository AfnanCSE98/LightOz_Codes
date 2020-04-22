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

const int maxn=1e5+5;
const int MOD=1e9+7;
const int INF = 1e9;

char grid[21][21];
bool visited[21][21];
int ans;
int n,m;
bool boundary(int i,int j){return (i>=0 and i<m) and (j>=0 and j<n);}
void dfs(int x,int y)
{
    int X[]={0,1,0,-1};
    int Y[]={-1,0,1,0};
    for(int i=0;i<4;i++)
    {
        if( boundary(x+X[i] , y+Y[i]) and grid[x+X[i]][y+Y[i]] == '.' and !visited[x+X[i]][y+Y[i]])
        {
            visited[x+X[i]][y+Y[i]] = true;
            ans++;
            dfs(x+X[i] , y+Y[i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc,nc=0,x,y;
    cin>>tc;
    while(tc--)
    {
        memset(visited , false , sizeof visited);
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                char ch;
                cin>>ch;
                grid[i][j]=ch;
                if(ch=='@')
                {
                    x=i;y=j;
                    visited[x][y]=true;
                }
            }
        }

        ans=1;
        dfs(x,y);
        cout<<"Case "<<++nc<<": "<<ans<<endl;

    }
}
