#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ll long long
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    forn(i, n)
    {
        ll x;
        cin >> x;
        ll ans = (x * a) % b;
        ans /= a;
        cout << ans << " ";
    }
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