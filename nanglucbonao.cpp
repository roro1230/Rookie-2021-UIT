#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
#define pb push_back
#define inf -1
vector < unsigned int > a(100005);
vector < unsigned int > dl1(100005);
vector < unsigned int > dl2(100005);
class solution
{
public:
    unsigned int n;
    unsigned int calc(unsigned int x, unsigned int y)
    {
        while (x * y > 0)
        {
            if (x > y) x = x % y;
            else y = y % x ;
        }
        return max(x,y);
    }
    void in()
    {
        a.clear();
        cin >> n ;
        for(int i = 1 ; i <= n ; i++) 
        {
            int x;
            cin >> x ;
            a.pb(x);
        }
    }
    void solve()
    {
        if (n == 2)
        {
            if (a[0] < a[1]) 
            {
                cout << 1 << " " << a[1] << endl;
                return ;
            }
            if (a[0] > a[1])
            {
                cout << 2 << " " << a[0] << endl;
                return ;
            }
        }
        int pos ;
        dl1.clear();
        dl2.clear();
        dl1.pb(a[0]);
        dl2.pb(a[a.size()-1]);
        for(int i = 1 ; i < a.size(); i++) 
        {
            unsigned int x = calc(dl1[dl1.size() - 1],a[i]);
            dl1.pb(x);
        }
        for(int i = a.size() - 2 ; i >= 0; i--) 
        {
            unsigned int x = calc(dl2[dl2.size()-1],a[i]);
            dl2.pb(x);
        }
        reverse(dl2.begin(),dl2.end());
        /*for(int i = 0 ; i < n ; i++) cout << dl1[i] << " " ;
        cout << endl;
        for(int i = 0 ; i < n ; i++) cout << dl2[i] << " " ;
        cout << endl;*/
        unsigned int res = 0;
        pos = 0;
        unsigned int x ;
        for(int i = 0 ; i < n ; i++)
        {
            if (i == 0) x = dl2[i+1];
            else if (i == n-1) x = dl1[i-1];
            else x = calc(dl1[i-1],dl2[i+1]);
            if (res < x) 
                {
                    res = x ;
                    pos = i ;
                }
        }
        cout << pos+1 << " " << res << endl;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("inputf.inp","r",stdin);
    //freopen("outputf.out","w",stdout);
    solution *sol = new solution ;
    sol->in();
    sol->solve();
    return 0;
}