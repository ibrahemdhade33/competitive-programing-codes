#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
int n, m;
int vis[50][50];
void dfs(int i, int j, int x, int y, vector<string> grid)
{
    // cout << 111111 << endl;
    if (i == n || i < 0 || j == m || j < 0 || grid[i][j] != grid[x][y])
        return;

    if (vis[i][j] && (i != x || j != y))
    {
        cout << "Yes";
        exit(0);
    }
    if (!vis[i][j])
        vis[i][j] = 1;
    if (i + 1 > x)
        dfs(i + 1, j, i, j, grid);
    if (j + 1 > y)
        dfs(i, j + 1, i, j, grid);
    if (i - 1 < x)
        dfs(i - 1, j, i, j, grid);
    if (j - 1 < y)
        dfs(i, j - 1, i, j, grid);
}
void solve()
{

    cin >> n >> m;
    vector<string> grid(n);
    forn(i, n)
    {
        cin >>
            grid[i];
    }
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j])
                dfs(i, j, i, j, grid);
        }
    }
    cout << "No";
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