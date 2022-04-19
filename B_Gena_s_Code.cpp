#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
// 10000000011000000000
void solve()
{
    int n;
    cin >> n;
    string s;
    int z = 0;
    string unbeaut = "1";
    forn(i, n)
    {

        cin >> s;

        if (s == "0")
        {
            cout << 0;
            return;
        }
        else if (s == "1")
            continue;
        else if (s.size() > 1 && s[0] == '1')
        {
            int f = 0;
            for (int j = 1; j < s.size(); j++)
                if (s[j] != '0')
                {
                    f = 1;
                    break;
                }
            if (!f)
                z += s.size() - 1;
            else
                unbeaut = s;
        }
        else

            unbeaut = s;
    }
    cout << unbeaut;
    forn(i, z)
            cout
        << 0;
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