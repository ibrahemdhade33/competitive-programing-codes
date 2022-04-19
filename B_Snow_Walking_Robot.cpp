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
    string s;
    cin >> s;
    int u = 0, d = 0, l = 0, r = 0;
    for (auto i : s)
    {
        if (i == 'L')
            l++;
        else if (i == 'R')
            r++;
        else if (i == 'U')
            u++;
        else
            d++;
    }
    int cnt = 0;
    vector<char> ans;
    int mi = min(l, r);
    int mi1 = min(u, d);
    if (mi > 1 && (r != 0 || l != 0) && (d == 0 || u == 0))
    {
        cout << 2 << endl;
        cout << "LR" << endl;
        return;
    }
    else if (mi1 > 1 && (d != 0 || u != 0) && (l == 0 || r == 0))
    {
        cout << 2 << endl;
        cout << "UD" << endl;
        return;
    }

    for (int i = 0; i < mi; i++)
    {
        ans.pb('R');
        cnt++;
    }

    for (int i = 0; i < mi1; i++)
    {
        ans.pb('U');
        cnt++;
    }

    for (int i = 0; i < mi; i++)
    {
        ans.pb('L');
        cnt++;
    }
    for (int i = 0; i < mi1; i++)
    {
        ans.pb('D');
        cnt++;
    }

    cout << cnt << endl;
    for (auto i : ans)
        cout << i;
    cout << endl;
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