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

bool pal(ll n)
{
    ll rev=0;;
    ll tmp=n;
    while(n!=0)
    {
       ll dig=n%10;
       rev= rev*10 + dig;
       n=n/10;
    }
    if(rev==tmp)
    {
        return true;
    }
    else return false;
}
bool isPalindrome(string str){



    for(int i = 0; i <= str.length()-1; i++){
        if(str[i] != str[str.length()-1-i]){
            return false;
        }else {
            return true;
        }
    }
}
//int isPalindrome(string str)
//{
//    // Start from leftmost and rightmost corners of str
//    int l = 0;
//    int h = str.size() - 1;
//
//    // Keep comparing characters while they are same
//    while (h > l)
//    {
//        if (str[l++] != str[h--])
//        {
//           return false;
//        }
//    }
//    return true;
//}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int tc;cin>>tc;int nc=0;
    while(tc--)
    {
        ll n;cin>>n;
        if(pal(n))
        {
            cout<<"Case "<<++nc<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<++nc<<": No"<<endl;
        }

    }
}
