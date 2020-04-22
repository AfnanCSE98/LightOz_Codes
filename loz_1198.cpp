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
    int t,i,j,x=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi a,b;
        for(i=0; i<n; i++)
        {
            int g;
            cin>>g;
            a.pb(g);
        }
        for(i=0; i<n; i++)
        {
            int g;
            cin>>g;
            b.pb(g);
        }
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        int score=0;
        for(i=0; i<n; i++)
        {
            if(b[i]!=-1)
            {
                for(j=0; j<n; j++)
                {


                    if(a[j]>b[i])
                    {
                        score+=2;
                        b[i]=-1;
                        a[j]=-1;
                        break;
                    }

                }
            }
        }

        for(i=0; i<n; i++)
        {
            if(b[i]!=-1)
            {
                for(j=0; j<n; j++)
                {
                    if(a[j]!=-1)
                    {
                        if(a[j]==b[i])
                        {
                            score++;
                            b[i]=-1;
                            a[j]=-1;
                            break;
                        }
                    }
                }
            }
        }
        cout<<"Case "<<++x<<": "<<score<<endl;

    }
}

