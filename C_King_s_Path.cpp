#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
// to remember for bfs : the node that pushed to the queue mark as visited to ignor
// adding it another time'when the node pushed to the queue,it is guranteed that hte node j
// joined by the shortest bath'
void bfs(set<pair<int, int>> s, int xi, int yi, int xf, int yf)
{
    int dr[8] = {-1, 1, 0, 0, -1, -1, 1, 1};
    int dc[8] = {0, 0, -1, 1, 1, -1, 1, -1};
    map<pair<int, int>, int> vis;
    for (auto i : s)
    {
        vis[i] = 0;
    }
    queue<pair<int, int>> q;
    q.push({xi, yi});
    vis[{xi, yi}] = 1;
    q.push({-1, -1});
    int size = 1;

    int depth = 0;

    while (q.size() > 1)
    {
        pair<int, int> cur = q.front();
        q.pop();
        if (cur.first == -1 && cur.second == -1)
        {
            depth++;
            q.push({-1, -1});
        }
        for (int i = 0; i < 8; i++)
        {

            if (s.count({cur.first + dr[i], cur.second + dc[i]}) > 0 &&
                vis[{cur.first + dr[i], cur.second + dc[i]}] == 0)
            {

                q.push({cur.first + dr[i], cur.second + dc[i]});
                vis[{cur.first + dr[i], cur.second + dc[i]}] = 1;
                if (cur.first + dr[i] == xf && cur.second + dc[i] == yf)
                {
                    cout << depth + 1;
                    return;
                }
            }
        }
    }

    cout << -1;
}
void solve()
{
    int xi, yi, xf, yf;
    cin >> xi >> yi >> xf >> yf;
    int n;
    cin >> n;
    set<pair<int, int>> s;

    forn(i, n)
    {
        int r, a, b;
        cin >> r >> a >> b;
        for (int j = a; j <= b; j++)
        {
            s.insert({r, j});
        }
    }

    bfs(s, xi, yi, xf, yf);
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