#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-10;
class solution
{
public:
    long long n,m,h,w;
    void in()
    {
        cin >> n >> m >> h >> w;
    }
    int cnt(long long x, long long y)
    {
        int d = 0 ; long long k = y ;
        while (k < x)
        {
            k*=2;
            d++;
        }
        return d ;
    }
    void solve()
    {
        cout << min(cnt(n,h) + cnt(m,w),cnt(n,w) + cnt(m,h)) << endl;
    }
};
int main()
{
    freopen("inputf.inp","r",stdin);
    freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->solve();
    return 0;
