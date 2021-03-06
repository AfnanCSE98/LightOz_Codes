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
int n;
int dist[maxn];
int dist2[maxn];
vector< pii > adj[maxn];

void dijkstra(int src)
{

   priority_queue<pii , vector<pii> , greater<pii> >pq;///shorted in non-increasing order w.r.t distance
   pq.push(mp(0,src));
   dist[src] = 0;

   while(!pq.empty())
   {
       pii top = pq.top();
       pq.pop();

       int curr=top.second;
       for(int i=0;i<adj[curr].size();i++)
       {
           int next = adj[curr][i].first;
           int wt_next_curr = adj[curr][i].second;
           if(dist[curr]+wt_next_curr < dist[next])
           {
               dist[next] = dist[curr]+wt_next_curr ;//cout<<dist[next]<<endl;
               pq.push(mp(dist[next] , next));
           }
       }
   }
}

void dijkstra2(int src)
{

   priority_queue<pii , vector<pii> , greater<pii> >pq;///shorted in non-increasing order w.r.t distance
   pq.push(mp(0,src));
   dist2[src] = 0;

   while(!pq.empty())
   {
       pii top = pq.top();
       pq.pop();

       int curr=top.second;
       for(int i=0;i<adj[curr].size();i++)
       {
           int next = adj[curr][i].first;
           int wt_next_curr = adj[curr][i].second;
           if(dist2[curr]+wt_next_curr < dist2[next])
           {
               dist2[next] = dist2[curr]+wt_next_curr ;//cout<<dist[next]<<endl;
               pq.push(mp(dist2[next] , next));
           }
       }
   }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc,nc=0,m,src,u,v,wt;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)dist[i]=INF;
        for(int i=0;i<n;i++)dist2[i]=INF;
        while(m--)
        {
            cin>>u>>v;
            adj[u].push_back(mp(v,1));
            adj[v].push_back(mp(u,1));
        }
        int sc,sk;
        cin>>sc>>sk;
        dijkstra(sc);
        dijkstra2(sk);

        int mx=-1;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,dist[i]+dist2[i]);
        }
        printf("Case %d: %d\n",++nc,mx);
        for(int i=0;i<n;i++)adj[i].clear();


    }
    return 0;
}


