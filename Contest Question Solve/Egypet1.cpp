#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        int biggest_num, medium_num, small_num;
        small_num = arr[0];
        medium_num = arr[1];
        biggest_num = arr[2];
        long long int sqr_big, sqr_small, sqr_mid, sum_of_smallmid;
        sqr_big = biggest_num * biggest_num;
        sqr_mid = medium_num * medium_num;
        sqr_small = small_num * small_num;
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
