#include <bits/stdc++.h>
using namespace std;
int candels(int n, int arr[])
{
    int a = INT_MIN, count_candle_height = 0;
    for (int i = 0; i < n; i++)
    {
        if (a < arr[i])
        {
            a = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            count_candle_height++;
        }
    }
    cout << count_candle_height;
    return count_candle_height;
};
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    candels(n,arr);
    return 0;
}