#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define begin begin()
#define end end()
#define ll long long
#define ep emplace_back
#define pb push_back
#define insert ins
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, int> m;
    for (auto i : s)
        m[i]++;
    vector<char> t, t1;
    for (auto i : m)
    {
        if (i.second == 2)
        {
            t.pb(i.first);
        }
        else
            t1.pb(i.first);
    }
    for (auto i : t)
        cout << i;
    for (auto i : t)
        cout << i;
    for (auto i : t1)
        cout << i;
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}