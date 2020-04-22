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
unsigned long long  f(int n)
{
    unsigned long long  ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test,t=0;cin>>test;
    unsigned long long  fact[21];
    fact[0]=1;
    for(int i=1;i<21;i++)
    {
        ///fact[i]=fact[i-1]*i;
        fact[i]=f(i);
    }

    while(test--)
    {
        ll n;
        cin>>n;
        int i=19;
        stack<int>q;
        while(i>=0)
        {
            if(fact[i]<=n)
            {
                n-=fact[i];
                q.push(i);
            }
            i--;

        }
        if(n==0)
        {
            cout<<"Case "<<++t<<": ";
            while(q.size()!=1)
            {
                cout<<q.top()<<"!+";
                q.pop();
            }
            cout<<q.top()<<"!"<<endl;
            q.pop();
        }
        else
        {
            cout<<"Case "<<++t<<": impossible"<<endl;
        }
    }
}
