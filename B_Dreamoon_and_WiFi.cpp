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
int ans = 0;
void find_all(int n, string s1, string &temp, int i, string &f)
{
    if (n == i)
    {
        string t = temp + s1;
        // cout << t << " " << count(t.begin, t.end, '+') << " " << f << endl;
        if (count(t.begin, t.end, '+') == count(f.begin, f.end, '+'))
            ans++;
        return;
    }
    find_all(n, s1 + '+', temp, i + 1, f);
    find_all(n, s1 + '-', temp, i + 1, f);
}
void solve()
{
    string f, s;
    cin >> f >> s;
    // cout << f << " " << s;
    int cnt = 0;
    string temp = "";
    for (auto i : s)
    {
        if (i == '?')
            cnt++;
        else
            temp += i;
    }
    int n = pow(2, cnt);

    string s1 = "";
    find_all(cnt, "", temp, 0, f);
    // cout << n << " " << ans << endl;
    double a = (double)ans / n;
    printf("%.12f", a);
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