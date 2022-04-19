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
    long long n;
    cin >> n;
    int a[6];
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    a[3] = 0;
    a[4] = -1;
    a[5] = -1;
    cout << a[n % 6] << "\n";
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