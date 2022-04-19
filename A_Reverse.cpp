#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    if (is_sorted(v.begin(), v.end()))

    {
        forn(i, n)
        {
            cout
                << v[i] << " ";
        }
        cout << endl;
    }
    else
    {
        vector<int> t = v;
        sort(t.begin(), t.end());
        forn(i, n)
        {
            if (v[i] != t[i])
            {
                int index = find(v.begin() + i, v.end(), t[i]) - v.begin();
                // cout << index << "ssdfsdf" << endl;
                reverse(v.begin() + i, v.begin() + index + 1);
                forn(i, n)
                        cout
                    << v[i] << " ";
                cout << "\n";
                break;
            }
        }
    }
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