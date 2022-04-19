#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    long long sum = 0;
    forn(i, n)
        sum += v[i];
    if (sum == 0)
    {
        cout << 0 << "\n";
        return;
    }
    int max = 0;
    forn(i, n) if (v[i] > max)
        max = v[i];
    if (2 * max <= sum)
        cout << 1 << "\n";
    else
        cout << 2 * max - sum << "\n";
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