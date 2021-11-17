#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long n,m;
    void in()
    {
        cin >> n >> m ;
    }
    int cnt(long long x)
    {
        int d = 0;
        while (x > 0)
        {
            d++;
            x/=10;
        }
        return d;
    }
    long long cal(int x)
    {
        long long res = 1 ;
        for(int i = 1 ; i <= x ; i++) res*=10;
        return res;
    }
    void solve()
    {
        int dem = cnt(n) ;
        long long bot = m % cal(dem) ; 
        long long hd = m / cal(dem) ;
        if (n > bot) hd--;
        hd++;
        cout << hd << endl;
    }

private:
};
int main()
{
    freopen("inputf.inp","r",stdin);
    freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->solve();
    return 0;
}