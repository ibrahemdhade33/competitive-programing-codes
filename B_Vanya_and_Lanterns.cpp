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
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    sort(v.begin(), v.end());
    double m = max(v[0] - 0, l - v[v.size() - 1]);
    // cout << m << endl;
    forn(i, n - 1)
    {
        if ((v[i + 1] - v[i]) / 2.0 > m)
        {
            m = (v[i + 1] - v[i]) / 2.0;
            // cout << v[i + 1] << " " << v[i] << endl;
        }
    }
    printf("%.10f", m);
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