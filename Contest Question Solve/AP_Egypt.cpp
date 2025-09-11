#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int big, small, mid;
        big = max({a, b, c});
        small = min({a, b, c});
        // cout << big << " " << small << endl;
        mid = a + b + c - big - small;
        long long int sqr_big, sqr_small, sqr_mid, sum_of_smallmid;
        sqr_big = big * big;
        sqr_mid = mid * mid;
        sqr_small = small * small;
        sum_of_smallmid = sqr_mid + sqr_small;
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        else if (sum_of_smallmid == sqr_big)
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}