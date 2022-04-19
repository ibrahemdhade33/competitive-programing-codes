#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1), s(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >>
            v[i];
    int sum = 0;
    for (int i = 1; i <= k; i++)
        sum += v[i];
    s[k] = sum;
    // cout << sum << " ";
    for (int i = k + 1; i <= s.size(); i++)
    {

        s[i] = sum + v[i] - v[i - k];
        sum -= v[i - k];
        sum += v[i];
    }
    int min = s[k], index = k;
    for (int i = k; i < s.size(); i++)
    {
        // cout << s[i] << " ";
        if (s[i] < min)
        {
            min = s[i];
            index = i;
        }
    }
    cout << "\n";
    cout << index - k + 1;
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