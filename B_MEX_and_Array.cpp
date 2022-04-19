#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
int find_mex(vector<int> v)
{
    multiset<int> s;
    forn(i, v.size())
        s.insert(v[i]);
    for (int i = 0;; i++)
    {
        if (s.count(i))
            continue;
        else
        {
            // cout << "ibrahem\n";
            return i;
        }
    }
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    long long ans = 0;

    forn(i, n)
    {
        vector<int> t;
        for (int j = i; j < n; j++)
        {
            t.emplace_back(v[j]);
            ans += find_mex(t);
        }
    }
    cout << ans << endl;
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