#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)

        {
            cin >> arr[i][j];
        }
    }
    int sumX = 0;
    for (int j = 0; j < 3; j++)
    {

        if (j == 0)
        {
            for (int i = 0; i < n; i++)
            {
                sumX += arr[i][j];
            }
        }
    }
    int sumY = 0;
    for (int j = 0; j < 3; j++)
    {

        if (j == 1)
        {
            for (int i = 0; i < n; i++)
            {
                sumY += arr[i][j];
            }
        }
    }
    int sumZ = 0;
    for (int j = 0; j < 3; j++)
    {

        if (j == 2)
        {
            for (int i = 0; i < n; i++)
            {
                sumZ += arr[i][j];
            }
        }
    }
    if (sumX == 0 && sumY == 0 && sumZ == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}