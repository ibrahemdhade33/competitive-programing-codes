#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const pair<int, pair<int, int>> &a,
             const pair<int, pair<int, int>> &b)
{
    return (a.first < b.first);
}
int f_winner(vector<int> &v)
{
    if (v.size() == 1)
        return v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if ((v[i] + v[i + 1]) % 2 != 0)
            v.erase(v.begin() + i + 1);
        else
            v.erase(v.begin() + i);
    }
    return f_winner(v);
}
void solve()
{
    int n;
    cin >> n;
    n = pow(2, n) - 1;
    cout << n << endl;
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