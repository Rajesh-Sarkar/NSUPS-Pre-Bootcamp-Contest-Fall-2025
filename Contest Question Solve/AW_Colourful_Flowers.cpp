#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        double area_of_sunflowers, area_of_violets, area_of_roses;
        double s, triangle_area, radius_of_red, radius_of_yellow;
        s = (a + b + c) / 2.0;
        triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));
        radius_of_red = triangle_area / s;
        area_of_roses = acos(-1) * radius_of_red * radius_of_red;
        area_of_violets = triangle_area - area_of_roses;
        radius_of_yellow = ((a * b * c) / (4.0 * triangle_area));
        area_of_sunflowers = (acos(-1) * radius_of_yellow * radius_of_yellow) - triangle_area;
        cout << fixed << setprecision(4) << area_of_sunflowers << " " << area_of_violets << " " << area_of_roses << endl;
        
    }
    return 0;
}