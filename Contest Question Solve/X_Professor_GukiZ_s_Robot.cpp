#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int del_x, del_y;
    del_x = abs(x2 - x1);
    del_y = abs(y2 - y1);
    if (del_x > del_y)
    {
        cout << del_x;
    }
    else
    {
        cout << del_y;
    }
    return 0;
}