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
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t,i,j;
    cin>>t;int x=0;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int ans;
        if(n==1 )
        {
            ans=m;
        }
        else if(m==1)
        {
            ans=n;
        }
        else if(m==2)
        {
            if(n%4==3)ans=n+1;
            else ans=n+n%4;
        }
        else if(n==2)
        {
            if(m%4==3)ans=m+1;
            else ans=m+m%4;
        }
        else if(m%2==0 or n%2==0)
        {
           ans=m*n/2;
        }
        else
        {
             ans=ceil((double)(m)*n/2);

        }
        cout<<"Case "<<++x<<": "<<ans<<endl;
    }
}
