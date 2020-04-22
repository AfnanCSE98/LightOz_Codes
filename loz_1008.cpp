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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,t=1;cin>>test;
    while(test--)
    {
        ll n;cin>>n;ll row,col;
        ll sq=ceil(sqrt((double)(n)));
        if(sq&1)
        {
                if(sq*sq-n<sq)
            {
                row=sq;
                col=1+sq*sq-n;
            }
            else
            {
                col=sq;
                row=n-(sq-1)*(sq-1);
            }

        }

        else
        {
            if(sq*sq-n<sq)
            {
                col=sq;
                row=1+sq*sq-n;
            }
            else
            {
                row=sq;
                col=n-(sq-1)*(sq-1);
            }
        }

        cout<<"Case "<<t++<<": "<<col<<" "<<row<<endl;
    }
}
