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
    string ans = "", ans1 = "";
    int sum = 0;
    int i = 0;

    if (n % 3 == 1)
        while (sum < n)
        {
            if (i % 2 == 0)
            {
                ans += '1';
                sum += 1;
            }
            else
            {
                ans += '2';
                sum += 2;
            }
            i++;
        }

    else
    {
        sum = 0;
        i = 0;
        while (sum < n)
        {
            if (i % 2 == 0)
            {
                ans += '2';
                sum += 2;
            }
            else
            {
                ans += '1';
                sum += 1;
            }
            i++;
        }
    }
    cout << ans << endl;
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