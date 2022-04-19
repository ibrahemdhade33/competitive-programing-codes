#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

void solve()
{
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    forn(i, n)
            cin >>
        v[i];
    int i, j;
    i = a - 1, j = a - 1;
    int cnt = 0;
    int f = 0;
    for (;; i--, j++)
    {
        if (j == n)
        {
            f = 2;
            break;
        }
        else if (i < 0)
        {
            f = 1;
            break;
        }
        if (v[i] && v[j])
        {
            if (i == j)
                cnt++;
            else
                cnt += 2;
        }
    }
    if (f == 1)
    {
        for (; j < n; j++)
            if (v[j])
                cnt++;
    }
    else
    {
        for (; i >= 0; i--)
            if (v[i])
                cnt++;
    }

    cout << cnt;
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