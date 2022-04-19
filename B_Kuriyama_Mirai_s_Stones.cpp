#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long sum = 0;
    vector<long long> v(n + 1), s(n + 1), f(n + 1);

    for (int i = 1; i < n + 1; i++)
    {
        long long x;
        cin >> x;
        s[i] = x;
        sum += x;
        v[i] = sum;
    }
    sum = 0;
    sort(s.begin(), s.end());
    for (int i = 1; i < n + 1; i++)
    {
        sum += s[i];
        f[i] = sum;
    }
    int m;
    cin >> m;
    forn(i, m)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
            cout << v[r] - v[l - 1] << "\n";
        else
            cout << f[r] - f[l - 1] << "\n";
    }
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

// 6 4 2 7 2 7
// sum -> 2 = 6+4 =10
// sum ->7 = 6+4+2+7 = 19
// 19-10 = 9