#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m;
    int case_number = 1;
    while (cin >> m)
    {
        if (m == "*")
        {
            break;
        }
        if (m == "Hajj")
        {
            cout << "Case " << case_number << ":" << " " << "Hajj-e-Akbar" << endl;
        }
        else if (m == "Umrah")
        {
            cout << "Case " << case_number << ":" << " " << "Hajj-e-Asghar" << endl;
        }
        case_number++;
    }
    return 0;
}