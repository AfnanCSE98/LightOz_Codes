/**Bismillahir Rahmanir Rahimm**/
#include<bits/stdc++.h>
using namespace std;

//#define mp make_pair
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

vector<int> adj[10000];
bool visited[10000];
map<int,int>mp;
void initialize()
{
    for(int i=0;i<1e4;i++)
    {
        visited[i]=false;
    }
}
void dfs(int x)
{
    visited[x]=true;
    mp[x]++;
    for(int i=0;i<adj[x].size();i++)
    {
        if(!visited[adj[x][i]])
        {

            dfs(adj[x][i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc,nc=0;cin>>tc;
    initialize();
    while(tc--)
    {
        int k,node,edge,u,v;cin>>k>>node>>edge;
        int man[k];
        for(int i=0;i<k;i++){cin>>man[i];}
        for(int i=0;i<edge;i++)
        {
            cin>>u>>v;
            adj[u].pb(v);
        }
        for(int i=0;i<k;i++)
        {
            initialize();
            dfs(man[i]);
            //visited.clear();
        }
        int reached=0;
        for(int i=1;i<=node;i++)
        {
            if(mp[i]==k)reached++;
        }
        //adj.clear();
        for(int i=1;i<=node;i++)
        {
            adj[i].clear();
        }
        mp.clear();
        cout<<"Case "<<++nc<<": "<<reached<<endl;
    }

}

