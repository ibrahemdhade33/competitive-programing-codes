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
    string s;
    cin >> s;
    // cout << s.size() << " " << s << " ";
    list<char> st;
    int i = 0, pos = 0, cnt = 0;
    while (i < s.size())
    {

        if (pos != i && s[pos] == s[i])
        {
            cnt++;

            pos = i + 1;
            i++;
            st.clear();
            // cout << pos << " " << i << endl;
            continue;
        }
        if (st.empty() && s[i] == ')')
        {
            i++;
            continue;
        }
        if (s[i] == '(')
        {
            st.pb(s[i]);
            // cout << st.top() << endl;
        }
        if (s[i] == ')')
        {
            // cout << s[i] << endl;
            st.pop_back();
        }
        if (st.empty())
        {
            cnt++;
            // cout << cnt << endl;
            pos = i + 1;
            i++;
            continue;
        }
        i++;
    }
    cout << cnt << " " << s.size() - pos << endl;
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
