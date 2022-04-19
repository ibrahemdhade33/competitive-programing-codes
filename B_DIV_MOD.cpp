#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int l, r, a;
    cin >> l >> r >> a;
    int x = r % a;
    int ans = r / a + x;
    r -= x + 1;
    if (r >= l)
        ans = max(ans, r / a + r % a);
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