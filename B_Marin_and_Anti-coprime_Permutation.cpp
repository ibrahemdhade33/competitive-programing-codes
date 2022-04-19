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
    ll mod = 998244353;
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    n /= 2;
    ll y = 1;
    for (int i = 2; i <= n; i++)
    {
        y *= i;
        y %= mod;
    }
    cout << (y * y) % mod << endl;
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