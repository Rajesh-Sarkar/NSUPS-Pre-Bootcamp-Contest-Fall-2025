#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int sum, division, total_pay, net_payment;
        sum = k + 1;
        division = n / sum;
        total_pay = division * k;
        net_payment = n - total_pay;
        cout << net_payment << endl;
    }
    return 0;
}