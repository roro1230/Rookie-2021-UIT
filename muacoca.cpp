#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    string st;
    void in()
    {
        cin >> st ;
    }
    void solve()
    {
        if (st[0] == st[st.length()-1])
        {
            cout << "Lose" << endl;
            return ;
        }
        cout << "Win" << endl;
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