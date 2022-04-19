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
ll cnt = 0;

order_set s;
void dfs(vector<vector<int>> &g, int root, int n, int k)
{
    s.insert(root);
    for (int i = 0; i < g[root].size(); i++)
    {
        int r = s.order_of_key(abs(g[root][i] + k + 1));
        int l = s.order_of_key(g[root][i] - k);

        // cout << l << "\n";
        cnt += r - l;
        dfs(g, g[root][i], n, k);
    }
    s.erase(root);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> grid(n + 1);
    vector<int> index(n + 1);

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        grid[u].pb(v);
        index[v]++;
    }
    int root;
    for (int i = 1; i < n + 1; i++)
    {
        if (index[i] == 0)
        {
            root = i;
            break;
        }
    }

    dfs(grid, root, n, k);
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

//    3
//  2    1
//     4   5
// k=2
// 1  2  4 5 6 7 8
// cur=3