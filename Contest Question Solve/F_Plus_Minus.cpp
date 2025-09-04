#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float total_positive = 0.0, total_negative = 0.0, total_zero = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            total_zero++;
        }
        else if (arr[i] > 0)
        {
            total_positive++;
        }
        else
        {
            total_negative++;
        }
    }
    float a, b, c;
    a = total_positive / n;
    b = total_negative / n;
    c = total_zero / n;
    cout << fixed << setprecision(6) << a << endl;
    cout << fixed << setprecision(6) << b << endl;
    cout << fixed << setprecision(6) << c << endl;
    return 0;
}