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
    int n, b, x, y;
    cin >> n >> b >> x >> y;
    ll sum = 0;
    vector<int> v;
    v.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1] + x <= b)
            v.push_back(v[i - 1] + x);
        else
            v.push_back(v[i - 1] - y);
    }
    for (auto i : v)
    {
        sum += i;
    }
    cout << sum << endl;
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