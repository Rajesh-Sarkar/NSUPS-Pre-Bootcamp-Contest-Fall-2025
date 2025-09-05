#include <bits/stdc++.h>
using namespace std;
void triangle(int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
             
        }
       cout <<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    triangle(n);
    return 0;
}