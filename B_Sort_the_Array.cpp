#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define begin begin()
#define end end()
#define ll long long
#define ep emplace_back
#define pb push_back
#define insert ins
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n), temp;
    forn(i, n)
            cin >>
        v[i];
    if (is_sorted(v.begin, v.end))
    {
        cout << "yes\n"
             << 1 << " " << 1;
        return;
    }
    temp = v;

    int l = 0, r = n - 1;
    sort(temp.begin, temp.end);
    int cnt = 0;
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (v[i] != temp[i])
        {

            l = i;
            break;
        }
    }

    for (int j = n - 1; j >= 0; j--)
    {
        if (v[j] != temp[j])
        {

            r = j;
            // cout << v[j] << " " << temp[j] << "\n";
            break;
        }
    }

    // cout << l << " " << r << "\n";
    reverse(v.begin + l, v.begin + 1 + r);
    // for (auto i : v)
    //     cout << i << " ";
    // cout << "\n";
    if (is_sorted(v.begin, v.end))

    {
        cout << "yes\n";
        cout << l + 1 << " " << r + 1;
    }
    else
        cout << "no";
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