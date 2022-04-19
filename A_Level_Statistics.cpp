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
    int n;
    cin >> n;
    int arr[n][2];
    int p, c;
    int pl = 0, cl = 0;
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> c;
        if (p < cl || c < cl || c - cl > p - pl)
        {
            f = false;
        }
        pl = p;
        cl = c;
    }
    if (f)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
