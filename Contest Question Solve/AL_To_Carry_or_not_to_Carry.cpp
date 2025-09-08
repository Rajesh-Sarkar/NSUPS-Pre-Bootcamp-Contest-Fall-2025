#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        unsigned long sum = m ^ n;
        cout << sum << endl;
    }
}