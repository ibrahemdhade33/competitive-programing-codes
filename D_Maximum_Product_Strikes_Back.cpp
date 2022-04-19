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
    {
        cin >> v[i];
    }
    vector<ll> temp(n);
    vector<ll> temp2(n);
    temp[0] = (v[0]);
    for (int i = 1; i < n; i++)
    {
        temp[i] = temp[i - 1] * v[i];
    }
    temp2[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        temp2[i] = temp2[i + 1] * v[i];
    }
    int m1 = *max_element(temp.begin, temp.end);
    int m2 = *max_element(temp2.begin, temp2.end);
    // cout << m2 << " " << m1;
    if (m1 >= m2)
    {
        cout << 0 << " ";
        int ind = find(temp.begin, temp.end, m1) - temp.begin;
        cout << n - ind - 1;
    }
    else
    {

        int ind = find(temp2.begin, temp2.end, m2) - temp2.begin;

        cout << ind;
        cout << " " << 0;
    }
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