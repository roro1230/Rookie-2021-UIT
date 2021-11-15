#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector < long long > a(105);
class solution
{
public:
    vector < vector < long long > > res = vector < vector < long long > > (5);
    long long m;
    void in()
    {
        cin >> m ;
    }
    void init()
    {
        a.clear();
        long long x = 1 ;
        a.pb(x);
        for(int i = 1 ; i <= 38 ; i++) 
        {
            x*=3;
            a.pb(x);
        }
    }
    void solve()
    {
        res[0].clear(); res[1].clear(); 
        for(int i = 0 ; i <= 38 ; i++) if (m == a[i])
        {
            cout << -1 << endl;
            cout << i << endl;
            return ;
        } 
        bool fl = 1;
        int pos;
        while (m != 0)
        {
            pos = upper_bound(a.begin(),a.end(),abs(m)) - a.begin() ;
            if (m < 0)
            {
                if (abs(m) <= a[pos] / 2)
                {
                    pos-- ;
                    res[0].pb(pos) ;
                    m = m + a[pos] ; 
                }
                else
                {
                    res[0].pb(pos);
                    m = m + a[pos] ;
                }
            }
            else
            {
                if (abs(m) <= a[pos] / 2)
                {
                    pos-- ;
                    res[1].pb(pos) ;
                    m = m - a[pos] ; 
                }
                else
                {
                    res[1].pb(pos);
                    m = m - a[pos] ;
                }
            }
        }
    }
    void out()
    {
        if (res[0].size() == 0) cout << -1 << endl;
        else 
            {
                sort(res[0].begin(),res[0].end());
                for(int i = 0 ; i < res[0].size(); i++) cout << res[0][i] << " " ;
                cout << endl;
            }
        if (res[1].size() == 0) cout << -1 << endl;
        else
        {
            sort(res[1].begin(),res[1].end());
            for(int i = 0 ; i < res[1].size(); i++) cout << res[1][i] << " " ;
            cout << endl;
        }
    }
};
int main()
{
    freopen("inputf.inp","r",stdin);
    freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->init();
    sol->solve();
    sol->out();
    return 0;
}