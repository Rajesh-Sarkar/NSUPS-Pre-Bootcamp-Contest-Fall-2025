#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int max_juice, make_toast_by_juice, no_of_lime_slice, salt;
    max_juice = k * l;
    make_toast_by_juice = max_juice / nl;
    no_of_lime_slice = c * d;
    salt = p / np;
    int min = 0;
    if ((make_toast_by_juice < no_of_lime_slice) && (make_toast_by_juice < salt))
    {
        min = make_toast_by_juice;
    }
    else if ((make_toast_by_juice > no_of_lime_slice) && (no_of_lime_slice < salt))
    {
        min = no_of_lime_slice;
    }
    else
    {
        min = salt;
    }
    int toast_make;
    toast_make = min / n;
    cout << toast_make;
    return 0;
}