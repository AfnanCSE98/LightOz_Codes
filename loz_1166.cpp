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

    int t,x=0;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];

        }
        sort(b,b+n);



        for(int i=0; i<n; i++)
        {

            int k;
            for(int j=0; j<n; j++)
            {
                if(b[i]==a[j])
                {
                    k=j;
                    break;
                }
            }
            ///cout<<k<<endl;
            if( a[i]!=b[i])
            {
                cnt++;
                swap(a[i],a[k]);

            }

        }
        cout<<"Case "<<++x<<": "<<cnt<<endl;
    }

}
