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
    if (is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }
    else if (is_sorted(v.begin(), v.end(), greater<int>()))
        cout << n - 1 << endl;
    else
    {
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] > v[i - 1])
                cnt++;
        }
        cout << n - cnt + 1 << endl;
    }
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