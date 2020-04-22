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

const int maxn=3e4+5;
const int MOD=1e9+7;
const int INF = 1e9;

int dist[maxn];
vector< pii > adj[maxn];

void dijkstra(int src)
{
   for(int i=0;i<maxn;i++)dist[i]=INF;
   priority_queue<pii, vector<pii>, greater<pii> > pq;
    pq.push(mp(0,src));
    dist[src]=0;

    while(!pq.empty())
    {
        pii top = pq.top();
        pq.pop();

        int current_src = top.second;
        int weight = top.first;


        for(int i=0;i<adj[current_src].size();i++)
        {
            int nextnode = adj[current_src][i].first;int we_curr_next = adj[current_src][i].second;
           if(max(dist[current_src] , we_curr_next) < dist[nextnode])
           {
               dist[nextnode] = max(dist[current_src] , we_curr_next);
               pq.push(mp(dist[nextnode] , nextnode));
           }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc,nc=0,n,m,src,u,v,wt;
    cin>>tc;
    //cout<<"\n";
    while(tc--)
    {
        cin>>n>>m;

        while(m--)
        {
            cin>>u>>v>>wt;
            adj[u].pb(mp(v,wt));
            adj[v].pb(mp(u,wt));
        }
        cin>>src;
        dijkstra(src);

        cout<<"Case "<<++nc<<":\n";

        for(int i=0;i<n;i++)
        {
            if(dist[i]==INF)cout<<"Impossible\n";
            else cout<<dist[i]<<endl;
        }
        for(int i=0;i<n;i++)adj[i].clear();
    }
}


