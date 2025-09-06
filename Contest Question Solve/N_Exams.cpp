#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        float divison = 0.0, multiplication = 0.0;
        multiplication = x * y;
        divison = z/multiplication;
        if (divison > 0.50)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}