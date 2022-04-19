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
    vector<ll> v(n);
    forn(i, n)
            cin >>
        v[i];
    sort(v.begin, v.end);
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[i] % v[j] == v[j] - 1)
            {
                cout << v[j] << " " << v[i] << "\n";
                return;
            }
        }
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