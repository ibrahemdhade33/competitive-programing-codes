#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO";
        return;
    }
    int cnt1 = 0, cnt2 = 0;
    forn(i, n)
    {
        int x;
        cin >> x;
        if (x == 100)
            cnt1++;
        else
            cnt2++;
    }
    // cout << cnt1 << " " << cnt2;
    if (cnt1 == cnt2 * 2 || (cnt1 % 2 == 0 && cnt2 == 0) || cnt2 % 2 == 0 && cnt1 == 0 || (cnt1 % 2 == 0 && cnt2 % 2 == 0) || (cnt1 % 2 == 0 && cnt2 % 2 == 1 && cnt1 > 0))
        cout << "YES\n";
    else
        cout << "NO\n";
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