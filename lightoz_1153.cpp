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

const int maxn=5e5+5;
const int MOD=1e9+7;
const int INF = 1e9;
int s,t,m;
int f[101][101];
vector<pii>adj[101];
bool vis[101];int parent[101];

bool bfs()
{
    memset(vis , 0 , sizeof(vis));
    queue<int> q;
    q.push(s);
    vis[s] = true;

    while(!q.empty())
    {

        int tmp = q.front();
        q.pop();
        //cout<<tmp<<endl;
        for(int i=0;i<adj[tmp].size();i++)
        {
            int x = adj[tmp][i].first;
            int wt = f[tmp][x];
            if(!vis[x] and wt>0){
                q.push(x);
                vis[x] = true;
                parent[x] = tmp;
            }
        }
    }
    return vis[t];
}

int solve()
{
    int ans=0;
    while(bfs())
    {
        int k=t,flow=INT_MAX;
        while(k!=s)
        {
            flow = min(flow , f[k][parent[k]]);
            k = parent[k];
        }
        k=t;
        while(k!=s)
        {
            f[k][parent[k]]-=flow;
            f[parent[k]][k]-= flow;
            k = parent[k];
        }
        ans+=flow;

    }
    return ans;
}
void clr()
{
    for(int i=0;i<101;i++)
    {
        adj[i].clear();
        parent[i] = -1;
    }
}
int main()
{
    int tc,u,v,w,n,z=1;cin>>tc;

    while(tc--){
        memset(f , 0 , sizeof(f));
        cin>>n;
        cin>>s>>t>>m;
        for(int i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            adj[u].pb(mp(v,w));
            adj[v].pb(mp(u,w));
            f[u][v] += w;
            f[v][u] += w;
        }
        int ans = solve();
        cout<<"Case "<<z++<<": "<<ans<<endl;
        clr();
    }
}
