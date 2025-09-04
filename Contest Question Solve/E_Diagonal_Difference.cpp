#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> n;
    m = n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    //    for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    // }
    int primary_diagonal_sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += arr[i][j];
            }
        }
    }
    // cout << "primary_diagonal_sum" << " " << primary_diagonal_sum << endl;

    int secondary_diagonal_sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == 2)
            {
                secondary_diagonal_sum += arr[i][j];
            }
        }
    }
    // cout << " secondary_diagonal_sum" << " " << secondary_diagonal_sum << endl;
    int total_sum=0;
    total_sum=primary_diagonal_sum-secondary_diagonal_sum;
    if(total_sum<0)
    {
        cout << total_sum*-1;
    }
    else 
    {
        cout << total_sum;
    }
    return 0;
}