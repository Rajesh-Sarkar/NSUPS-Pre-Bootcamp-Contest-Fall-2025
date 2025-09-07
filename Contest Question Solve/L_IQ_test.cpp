#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int odd_count = 0, even_count = 0, odd_num, even_num;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even_num = i;
            even_count++;
        }
        else
        {
            odd_num = i;
            odd_count++;
        }
    }

    if (odd_count == 1)
    {
        cout << odd_num;
    }
    else
    {
        cout << even_num;
    }

    return 0;
}