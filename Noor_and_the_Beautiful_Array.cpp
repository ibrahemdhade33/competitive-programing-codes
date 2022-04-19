// CPP program to find a number that
// divides maximum array elements

#include <bits/stdc++.h>
using namespace std;

vector<int> printNumbers(int a[], int n)
{

    // hash to store the number of times
    // a factor is there
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int num = a[i];

        // find all the factors
        for (int j = 1; j * j <= num; j++)
        {

            // if j is factor of num
            if (num % j == 0)
            {
                if (j != 1)
                    mpp[j]++;

                if ((num / j) != j)
                    mpp[num / j]++;
            }
        }
    }

    // find the maximum times
    // it can divide
    int maxi = 0;
    for (auto it : mpp)
    {
        maxi = max(it.second, maxi);
    }

    // print all the factors of
    // numbers which divides the
    // maximum array elements
    vector<int> v;
    for (auto it : mpp)
    {
        if (it.second == maxi)
            v.push_back(it.first);
    }
    return v;
}

// Driver program
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        vector<int> v = printNumbers(A, n);
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }

    return 0;
}
