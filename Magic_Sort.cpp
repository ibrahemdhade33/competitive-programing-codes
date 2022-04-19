#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
// sorting for pairs
bool sortbyw(const int &a,
             const int &b)
{
    if (abs(a) != abs(b))
        return abs(a) < abs(b);
    return a > b;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;

    forn(i, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), sortbyw);
    forn(i, n)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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