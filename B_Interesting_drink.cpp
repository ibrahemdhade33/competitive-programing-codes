#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define begin begin()
#define end end()
#define ll long long
#define ep emplace_back
#define pb push_back
#define ins insert
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_set; // find_by_order, order_of_key
int findMinIndex(int arr[], int low, int high)
{

    if (high < low)
        return 0;

    if (high == low)
        return low;

    int mid = (low + high) / 2;

    if (mid < high && arr[mid + 1] < arr[mid])
        return (mid + 1);

    if (mid > low && arr[mid] < arr[mid - 1])
        return mid;

    if (arr[high] > arr[mid])
        return findMinIndex(arr, low, mid - 1);
    return findMinIndex(arr, mid + 1, high);
}

int binary_search(int arr[], int l, int h, int x)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] <= x)
            l = mid + 1;

        else
            h = mid - 1;
    }

    return h;
}

int countEleLessThanOrEqual(int arr[], int n, int x)
{

    int min_index = findMinIndex(arr, 0, n - 1);

    if (x <= arr[n - 1])
        return (binary_search(arr, min_index, n - 1, x) + 1 - min_index);

    if ((min_index - 1) >= 0 && x <= arr[min_index - 1])
        return (n - min_index + binary_search(arr, 0, min_index - 1, x) + 1);

    return n;
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
    sort(v.begin, v.end);
    int q;
    cin >> q;
    forn(i, q)
    {
        int x;
        cin >> x;
        cout << upper_bound(v.begin, v.end, x) - v.begin << endl;
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