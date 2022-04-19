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
    string s;
    cin >> s;
    int index = 0, index1 = 0;
    int max = 0, max1 = 0;
    for (int i = s.size() - 1; i > 0; i--)
    {
        max = (int)s[i] - 48 + (int)s[i - 1] - 48;

        index = i;
        if (max >= 10)
            break;
    }
    string s1 = to_string(max);
    // 167167
    // 113167
    // 167113
    // 199567
    if (max >= 10)
    {
        s[index] = s1[1];
        s[index - 1] = s1[0];
    }
    else
    {
        s[index] = '*';
        s[index - 1] = s1[0];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '*')
            cout << s[i];
    }
    cout << "\n";
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