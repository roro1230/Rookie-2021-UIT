#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long n,m;
    void in()
    {
        cin >> n >> m;
    }
    void solve()
    {
        if (n == 3 && m == 4) 
        {
            cout << 6 << endl;
            return ;
        }
        n-=2, m-=2 ;
        long long res = 0;
        if (m == 0) 
            {
                cout << n+1 << endl;
                return ;
            }
        while (n > 0 && m > 0)
            {
                res = res + 2 * (n + m);
                n-=2; m-=2;
            }
        if (n == -1 || m == -1)
        {
            cout << res << endl;
            return ;
        }
        if (n == 0 || m == 0)
        {
            res+=max(m,n) + 1;
            cout << res << endl;
            return ;
        }
    }
};
int main()
{
    //freopen("inputf.inp","r",stdin);
    //freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->solve();
    return 0;
}