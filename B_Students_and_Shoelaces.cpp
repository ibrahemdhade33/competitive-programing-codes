#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define begin begin()
#define end end()
#define ll long long
#define ep emplace_back
#define pb push_back
#define ins insert
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_set; // find_by_order, order_of_key
int cnt = 0;
void dfs(vector<set<int>> &v)
{
    vector<int> temp;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].size() == 1)
            temp.pb(i);
    }
    if (!temp.empty())
    {
        // cout << 1111 << endl;
        cnt++;
        for (auto i : temp)
        {
            for (auto j : v[i])
            {
                v[j].erase(v[j].find(i));
            }
            v[i].clear();
        }
        temp.clear();
        dfs(v);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<set<int>> v(n + 1);
    forn(i, m)
    {
        int a, b;
        cin >> a >> b;
        v[a].ins(b);
        v[b].ins(a);
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (!v[i].empty())
    //     {
    //         cout << i << endl;
    //         for (auto j : v[i])
    //             cout << j << " ";
    //         cout << endl;
    //     }
    // }
    dfs(v);
    cout << cnt;
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