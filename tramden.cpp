#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long k,res1,res2,diff;
    void in()
    {
        cin >> k ;
        k*=2;
        res1 = res2 = -1;
        diff = 1e15;
    }
    void solve()
    {
        long long n;
        for(int m = 1 ; m <= (long long) sqrt(k); m++)
        {
            if ((k - m - 1) % (2 * m + 1) != 0) continue;
            n = (k - m - 1) / (2 * m + 1) ;
            if (m < n)
            {
                if (diff > n-m) 
                {
                    diff = n-m;
                    res2 = n ; res1 = m ;
                }
            }
        }
        cout << res1 << " " << res2 << endl;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("inputf.inp","r",stdin);
    //freopen("outputf.out","w",stdout);
    int tests;
    cin >> tests;
    solution *sol = new solution ;
    while (tests--)
    {
        sol->in();
        sol->solve();
    }
    return 0;
}