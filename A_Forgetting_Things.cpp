#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define begin begin()
#define end end()
#define ll long long
#define ep emplace_back
#define pb push_back
#define insert ins
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_set; // find_by_order, order_of_key

void solve()
{
    int a, b;
    cin >> a >> b;

    if (abs(a - b) == 1 && a < b)
    {
        int m = min(a, b);
        int ma = max(a, b);
        string t = to_string(m), r = to_string(ma);
        t += "99";
        r += "00";
        cout << t << " " << r << endl;
    }
    else if (a == b)
    {
        string t = to_string(a), r = to_string(b);
        t += "1";
        r += "2";
        cout << t << " " << r << endl;
    }
    else if ((a == 9 && b == 1))
    {
        cout << 9 << " " << 10 << endl;
    }
    else if (a > b)
        cout << -1 << endl;
    else
    {
        cout << -1;
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
