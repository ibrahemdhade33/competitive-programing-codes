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
    map<int, int> mp;
    vector<int> a(n);
    forn(i, n)
    {
        int x;
        cin >> x;
        a[i] = x;
        mp[x]++;
    }
    if (a.size() == 1 && a[0] == 1)
    {
        cout << "YES" << endl;
        return;
    }
    sort(a.begin, a.end);
    if (mp[a[a.size() - 1]] > 1 || (mp[a[a.size() - 1]] > 0 && (mp[a[a.size() - 1] - 1] > 0)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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