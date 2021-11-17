#include <bits/stdc++.h>
using namespace std;
#define pb push_back
class solution
{
public:
    vector < long long > a;
    vector < long long > sum;
    vector < vector < long long > > res = vector < vector < long long > > (5);
    void in()
    {
        a.clear();
       int x,y;
       cin >> x >> y;
       n = x ; k = y;
       for(int i = 1 ; i <= n ; i++) 
       {
            cin >> x ;
            a.push_back(x);
       }
    }
    void solve()
    {
        res[0].clear(); res[1].clear();
        //res[0].pb(a[0]); res[1].pb(a[a.size()-1]);
        sum.clear();
        long long x = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            x+=a[i];
            sum.pb(x);
        }
        for(int i = 0 ; i < n ; i++)
        {
            if (i < k)
            {
                res[0].pb(sum[i]);
            }
            else res[0].pb(max(res[0][res[0].size()-1],sum[i] - sum[i-k]));
        }
        sum.clear();
        x = 0;
        for(int i = n-1 ; i >= 0 ; i--)
        {
            x+=a[i];
            sum.pb(x);
        }
        for(int i = 0 ; i < n  ; i++)
        {
            if (i < k) res[1].pb(sum[i]);
            else res[1].pb(max(res[1][res[1].size()-1],sum[i] - sum[i-k]));
        }
        reverse(res[1].begin(),res[1].end());
        /*for(int i = 0 ; i < n ; i++) cout << res[0][i] << " " ;
        cout << endl;
        for(int i = 0 ; i < n ; i++) cout << res[1][i] << " " ;
        cout << endl;*/
        long long ans = 1e15;
        for(int i = 0 ; i < n ; i++) 
            {
                if (i < k) ans = min(ans,res[1][i+k]);
                else if (i + 2 * k - 1 > n) ans = min(ans,res[0][i-1]);
                else ans = min(ans,max(res[0][i-1],res[1][i+k])) ;
            }
        cout << ans << endl;
    }

private:
    long long n,k;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("inputf.inp","r",stdin);
    freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->solve();
    return 0;
}