#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3], b[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    int Alice_Point = 0, Bob_Point = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == b[i])
        {
            
        }
        else if (a[i] > b[i])
        {
            Alice_Point++;
        }
        else if (a[i] < b[i])
        {
            Bob_Point++;
        }
    }
    cout << Alice_Point << " " << Bob_Point << endl;
    return 0;
}