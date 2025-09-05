#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    // cout << sum;
    int m = INT_MAX, b = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
    // cout << m;
    for (int i = 0; i < n; i++)
    {
        if (b < a[i])
        {
            b = a[i];
        }
    }
    // cout << b;
    int max_sum = 0, min_sum = 0;
    max_sum = sum - m;
    min_sum = sum - b;
    cout << min_sum << " " << max_sum;
    // cout << Min_sum << " " << Max_sum;
    return 0;
}