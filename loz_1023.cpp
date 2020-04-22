#include<bits/stdc++.h>
#include<algorithm>
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
//void swap(char *x, char *y)
//{
//    char temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int cnt=0;
//int permut(char *s , int l, int r,int k)
//{
//    if(l==r){
//        cout<<s<<endl;
//        cnt++;
//        if(cnt==k)
//        {
//            return 0;
//        }
//
//    }
//    else
//    {
//        int i;
//        for(i=l;i<=r;i++)
//        {
//            swap((s+l) , (s+i));
//            permut(s,l+1,r,k);
//            swap(s+l , s+i);
//        }
//    }
//}
string s;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

    int t;cin>>t; int x=0;

    while(t--)
    {
        int n,k;
        cin>>n>>k;



       int a[n];
       for(int i=0;i<n;i++)
       {
           a[i]=i;
       }
       printf("Case %d:\n",++x);
        while(k--)
        {
            for(int j=0;j<n;j++)
            {
                printf("%c",a[j]+'A');
            }
            printf("\n");
            if(!next_permutation(a,a+n)){break;}
        }
    }
    }
