#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
////ibraheem dhade
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x > sum)
            sum += x - sum;
    }
    cout << sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}
