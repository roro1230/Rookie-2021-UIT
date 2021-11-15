#include <bits/stdc++.h>
using namespace std;
class solution
{
public:
    long long a[10];
    void in()
    {
       for(int i = 1 ; i <= 6 ; i++) cin >> a[i];
    }
    void solve()
    {
       sort(a + 1 , a + 7) ;
       double res1,res2;
       int x = a[1], y = a[2] , z = a[5] , t = a[6] ;
       double res[10] ;
       for(int i = 1 ; i < 10 ; i++) res[i] = -1 ;
       res[1] = (double) (a[1] * a[5] + a[2] * a[6])/(a[5] * a[6]);
       res[2] = (double) (a[1] * a[6] + a[2] * a[5])/(a[5] * a[6]);
       
       if (res[1] < res[2])
       {
        if (a[1] * a[5] <= a[2] * a[6]) 
            cout << a[1] << " " << a[6] << " " << a[2] << " " << a[5] << endl;
        else cout << a[2] << " " << a[5] << " " << a[1] << " " << a[6] << endl;
       }
       else
       {
        if (a[1] * a[6] <= a[2] * a[5]) 
            cout << a[1] << " " << a[5] << " " << a[2] << " " << a[6] << endl;
        else cout << a[2] << " " << a[6] << " " << a[1] << " " << a[5] << endl;
       }
    }
private:
};
int main()
{
    //freopen("inputf.inp","r",stdin);
    //freopen("outputf.out","w",stdout);
    int n;
    cin >> n;
    while (n--)
    {
        solution *sol = new solution ;
        sol->in();
        sol->solve();
    }
    return 0;
}