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
    // cout << "aaa\n";
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    int i = 0;
    int prev = 0;
    int ans = 0;
    int j = n - 1;
    while (v[i] == 1)
    {
        i++;
    }
    while (v[j] == 1)
        j--;
    if (j < i)
        cout << 0 << "\n";
    else
        cout << j - i + 2 << "\n";
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