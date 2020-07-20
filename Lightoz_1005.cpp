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
ll factorial(ll n){
    ll res=1,cnt=1;
    while(cnt<=n){
        res=res*cnt;
        cnt++;
    }
    return res;
}
ll mul(ll n,ll k){
    ll cnt=1,res=n,val=n-1;
    while(cnt<k){
        res = res*val;
        val--;
        cnt++;
    }
    return res;
}
ll NcR(ll n, ll r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;

            // gcd of p, k
            long long m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;

    // if our approach is correct p = ans and k =1
    return p;
}
main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll tc,k,n,t=0,ans,tmp;
   // printf("%lld" , mul(5,2));
    cin>>tc;
    while(tc--){
        cin>>n>>k;
        if(k>n)ans=0;
        else if(k==n)ans = factorial(n);
        else{
            ans = NcR(n,k)*NcR(n,k)*factorial(k);
        }
        cout<<"Case "<<++t<<": "<<ans<<endl;
    }
}
