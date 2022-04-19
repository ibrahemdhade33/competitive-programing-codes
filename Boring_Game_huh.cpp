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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> sorted(n);
    forn(i, n)
    {
        int x;
        cin >> x;
        v[i] = x;
        sorted[i] = {x, i};
    }
    sort(sorted.begin, sorted.end);
    // for (auto i : sorted)
    //     cout << i.first << " " << i.second << "\n";
    multiset<int> is_peak;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1] && v[i] <= v[i - 1])
            is_peak.ins(i);
    }

    int s = 0;
    for (auto i : is_peak)
    {

        int l = i - 1;
        int r = i + 1;
        while (v[r] == -1)
            r++;
        while (v[l] == -1)
            l--;
        v[i] = -1;
        s += min(v[l], v[r]);
    }
    for (int i = 0; i < n; i++)
    {
        if (sorted[i].second == n - 1 || sorted[i].second == 0 || v[sorted[i].second] == -1)
            continue;
        else
        {
            int index = sorted[i].second;
            int l = index - 1;
            int r = index + 1;
            while (v[r] == -1)
                r++;
            while (v[l] == -1)
                l--;
            v[i] = -1;
            s += min(v[l], v[r]);
        }
    }
    cout << s;
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
// 3 7 8 9 10
// 3 5 4 9 10 11