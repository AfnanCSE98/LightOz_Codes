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

bool visited[maxn];
vector<pll> adj[maxn];
ll nodes;
ll cost[maxn];
ll mx=0;
vl dm;
ll dist1[maxn],dist2[maxn];
void bfs(ll x)
{
    queue<ll> q;
    q.push(x);
    visited[x]=false;
    ll cost[nodes];
    cost[x]=0;
    while(!q.empty())
    {
        ll n = q.front();
        //cout<<n<<" - ";
        visited[n] = true;
        q.pop();

        for(int i=0;i<adj[n].size();i++)
        {
            if(!visited[adj[n][i].first])
            {
                visited[adj[n][i].first] = true;
                q.push(adj[n][i].first);
                cost[adj[n][i].first] = cost[n] + adj[n][i].second;
                //cout<<cost[adj[n][i].first]<<endl;
            }
        }
    }
        mx=0;
        for(int i=0;i<nodes;i++)
        {
            mx=max(mx,cost[i]);
           // cout<<cost[i]<<endl;
        }


        for(int i=0;i<nodes;i++)
        {
            if(mx==cost[i]){dm.pb(i);break;}
        }

        //cout<<mx;
}

void bfs1(ll src)
{
    queue<ll>q;
    q.push(src);
    visited[src]=false;
    dist1[src] = 0;
    while(!q.empty())
    {
        ll cur=q.front();
        q.pop();
        visited[cur]=true;
        for(int i=0;i<adj[cur].size();i++)
        {
            if(!visited[adj[cur][i].first])
            {
                q.push(adj[cur][i].first);
                dist1[adj[cur][i].first] = dist1[cur]+adj[cur][i].second;
            }
        }
    }
}
void bfs2(ll src)
{
    queue<ll>q;
    q.push(src);
    visited[src]=false;
    dist2[src] = 0;
    while(!q.empty())
    {
        ll cur=q.front();
        q.pop();
        visited[cur]=true;
        for(int i=0;i<adj[cur].size();i++)
        {
            if(!visited[adj[cur][i].first])
            {
                q.push(adj[cur][i].first);
                dist2[adj[cur][i].first] = dist2[cur]+adj[cur][i].second;
            }
        }
    }
}
void initialize() {
        for(int i = 0;i < nodes;++i)
         visited[i] = false;
    }

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc;cin>>tc;int nc=0;
    while(tc--)
    {
        ll x, y,wt;
        cin >> nodes;
        for(int i = 0;i < nodes-1;++i) {
         cin >> x >> y >> wt;
         adj[x].push_back(mp(y,wt));
         adj[y].push_back(mp(x,wt));
        }
        initialize();
        bfs(0);
        ll a1=dm[0];
        initialize();
        bfs(a1);
        ll a2 = dm[1];

        ///a1 and a2 are two nodes having largest dist between them
        initialize();
        bfs1(a1);
        initialize();
        bfs2(a2);
       // cout<<"Case "<<++nc<<":\n";
        printf("Case %d:\n",++nc);
        for(int i=0;i<nodes;i++)
        {
            //cout<<max(dist1[i] , dist2[i])<<endl;
            printf("%d\n",max(dist1[i] , dist2[i]));
        }
        for(int i=0;i<nodes;i++)
        {
            adj[i].clear();     ///adj list cleared
        }
        for(int i=0;i<nodes;i++)
        {
            dist1[i]=dist2[i]=0;        ///two dist arrays cleared
        }
        for(int i=0;i<nodes;i++)
        {
            cost[i] = 0;
        }
       dm.clear();
    }
}

