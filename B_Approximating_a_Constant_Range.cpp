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
    // 5 5 5 6 6 6 7 7 7 7
    int cur;
    cin >> cur;
    int pre = -1, curcnt = 1, precnt = 0, longest = 1;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == cur)

            curcnt++;

        else if (x == pre)
        {
            precnt += curcnt;
            pre = cur;
            cur = x;
            curcnt = 1;
        }
        else
        {
            longest = max(longest, curcnt + precnt);
            precnt = curcnt;
            pre = cur;
            cur = x;

            curcnt = 1;
        }
    }

    cout << max(longest, curcnt + precnt);
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