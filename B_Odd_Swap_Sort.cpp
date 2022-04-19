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
    vector<int> v;
    vector<int> v1;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            v.push_back(x);
        else
            v1.push_back(x);
    }
    if (!is_sorted(v.begin(), v.end()))
    {
        cout << "No\n";
        return;
    }
    if (!is_sorted(v1.begin(), v1.end()))
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
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