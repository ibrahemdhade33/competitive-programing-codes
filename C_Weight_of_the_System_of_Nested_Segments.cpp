#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
bool sortbypos(const pair<int, pair<int, int>> &a,
               const pair<int, pair<int, int>> &b)
{
    return (a.second.second < b.second.second);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> v;
    forn(i, m)
    {
        int x, w;
        cin >> x >> w;
        v.push_back({w, {i + 1, x}});
    }

    sort(v.begin(), v.end(), sortbyw);
    vector<pair<int, pair<int, int>>> vv;
    int sum = 0;
    forn(i, 2 * n)
    {
        vv.push_back(v[i]);
        sum += v[i].first;
    }
    sort(vv.begin(), vv.end(), sortbypos);
    // forn(i, vv.size())
    //         cout
    //     << vv[i].first << " " << vv[i].second.first << " " << vv[i].second.second << "\n\n";

    cout << sum << endl;
    forn(i, n)
    {
        cout << vv[i].second.first << " " << vv[vv.size() - 1 - i].second.first << endl;
    }
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