#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1;
    char colon;
    cin >> h1 >> colon >> m1;
    int h2, m2;
    cin >> h2 >> colon >> m2;
    int middle_time, start_time, end_time, total_duration, half_duration;

    start_time = (h1 * 60) + m1;
    end_time = (h2 * 60) + m2;
    total_duration = end_time - start_time;

    half_duration = total_duration / 2;
    middle_time = start_time + half_duration;
    int h3, m3;
    h3 = middle_time / 60;
    m3 = middle_time % 60;

    cout << setw(2) << setfill('0') << h3 << ":" << setw(2) << setfill('0') << m3 << endl;
    return 0;
}