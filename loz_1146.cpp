#include <bits/stdc++.h>
using namespace std;

#define READ freopen("alu.txt", "r", stdin);
#define WRITE freopen("vorta.txt", "w", stdout);
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0)
#define XX first
#define YY second
#define PB push_back
#define MP make_pair
#define EPS 1e-8

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef pair<int, int> pii;
typedef pair<ld, ld> pld;
typedef pair<double, double> point;

const int MAX = 200000 + 5, MOD = 1e5 + 7;

point A, B, C, D;

double dist(point a, point b)
{
    double ret = (a.XX - b.XX)*(a.XX - b.XX) + (a.YY - b.YY)*(a.YY - b.YY);
    return sqrt(ret);
}
double calc(double t)
{
    point p, q;
    p.XX = A.XX + (B.XX - A.XX)*t;
    p.YY = A.YY + (B.YY - A.YY)*t;

    q.XX = C.XX + (D.XX - C.XX)*t;
    q.YY = C.YY + (D.YY - C.YY)*t;

    return dist(p, q);
}

int main()
{
    int tc, nc = 0;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lf %lf", &A.XX, &A.YY);
        scanf("%lf %lf", &B.XX, &B.YY);
        scanf("%lf %lf", &C.XX, &C.YY);
        scanf("%lf %lf", &D.XX, &D.YY);

        double lo = 0.0, hi = 1.0;
        int itr = 0;
        while(itr++ < 1000){
            double t1 = (2*lo + hi)/3.0;
            double t2 = (lo + 2*hi)/3.0;

            if(calc(t1) < calc(t2)) hi = t2;
            else lo = t1;
        }

        double t = (lo + hi)/2.0;
        double ans = calc(t);

        printf("Case %d: %.10f\n", ++nc, ans);
    }

    return 0;
}
