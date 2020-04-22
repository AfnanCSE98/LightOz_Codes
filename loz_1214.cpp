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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    ll p=0;
    while(t--)
    {
        ll val=0,mod;
        ll b;
        string s;
        cin>>s>>b;
        ll i=0,j;
         ll n=s.size();
        if(s[0]=='-')
               {
                i=1;
                n--;
               }
        if(b<0)
            b=b*(-1);

        while(n--)
        {
            ll tmp=s[i]-'0';
            val=val*10+tmp;
            val=val%b;
            i++;
        }
        if(val==0)
        {
            cout<<"Case "<<++p<<": "<<"divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<++p<<": "<<"not divisible"<<endl;
        }
    }
}
