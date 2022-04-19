#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string e = s;
    reverse(e.begin(), e.end());
    s += e;
    cout << s;
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