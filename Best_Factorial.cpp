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
typedef tree<int, null_type, less<int>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    order_set; // find_by_order, order_of_key

int find_n(vector<int> &a, int i, int sum, int k, int cnt)
{
    for (int j = i; j >= 0; j--)
    {
        // cout << j << endl;
        //  cout << j << endl;
        if (sum > k)
        {
            return 0;
        }
        if (sum == k)
        {
            cout << cnt << "\n";
            break;
        }
        else
        {
            int f = find_n(a, j, sum + a[j], k, cnt + 1);
            if (f)
                break;
        }
    }
    return 1;
}
void solve(vector<int> &a)
{
    int n;
    cin >> n;
    find_n(a, 7, 0, n, 0);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    int c = 2;

    vector<int> a(8);
    a[0] = 1;
    for (int i = 1; i < 8; i++)
    {
        a[i] = c * a[i - 1];
        c++;
    }
    // cout << a[7];
    while (t--)
        solve(a);
    return 0;
}