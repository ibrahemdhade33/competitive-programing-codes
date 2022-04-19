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
    map<int, vector<int>> m;
    forn(i, n)
    {

        int x;

        cin >> x;
        // cout << i << << x << endl;
        m[x].emplace_back(i);
    }
    // cout << "\n";
    vector<pair<int, int>> ans;
    for (auto i : m)
    {
        // cout << i.second.size() << "\n";
        if (i.second.size() == 1)
        {
            ans.emplace_back(i.first, 0);
            continue;
        }
        int def = abs(i.second[0] - i.second[1]);
        int f = 0;
        for (int j = 1; j < i.second.size() - 1; j++)
        {
            if (abs(i.second[j] - i.second[j + 1]) == def)
            {
                continue;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            ans.emplace_back(i.first, def);
        }
    }
    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i.first << " " << i.second << "\n";
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