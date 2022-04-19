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
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    map<int, int> m;
    forn(i, n)
        m[v[i]]++;
    vector<int> ans;
    for (auto i : m)
        if (i.second == 1)
            ans.pb(i.first);
    if (ans.size() > 0)
    {
        sort(ans.begin, ans.end);

        auto it = find(v.begin, v.end, ans[0]);
        int ind = it - v.begin;
        cout << ind + 1 << endl;
    }
    else
        cout << -1 << endl;
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