#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int lenth;
        cin >> lenth;
        double radius, width;
        width = 0.6 * lenth;
        radius = 0.2 * lenth;

        double area_of_red_portion, area_of_green_portion;
        area_of_red_portion = acos(-1)* (radius * radius);
        double area = lenth * width;
        area_of_green_portion = area - area_of_red_portion;

        cout << fixed << setprecision(2) << area_of_red_portion << " " << area_of_green_portion << endl;
    }
    return 0;
}