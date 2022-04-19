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
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
void solve()
{
    int x, y;
    cin >> x >> y;

    int t = max(x, y);
    int n = min(x, y);
    int cnt = 0;
    int cnt1 = 0;
    if (x == 0 && y == 0)
        cout << 0 << endl;

    else if (sqrt(pow(x, 2) + pow(y, 2)) - (int)sqrt(pow(x, 2) + pow(y, 2)) == 0)
        cout << 1 << endl;
    else
    {
        cout << 2 << endl;
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