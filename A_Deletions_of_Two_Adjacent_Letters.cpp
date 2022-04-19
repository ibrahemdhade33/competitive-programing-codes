#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;

    string s;
    cin >> s;
    char c;
    cin >> c;
    for (int i = 0; i < s.size(); i += 2)
        if (s[i] == c)
        {
            cout << "YES\n";
            return;
        }
    cout << "NO\n";
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