#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int quantity,price;
        cin >> quantity >> price;
        double total_price,discount;
        total_price= quantity*price;
        
        if(quantity>1000)
        {
           discount=total_price*0.10;
           cout << fixed << setprecision(6) << total_price-discount << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << total_price << endl;
        }
    }
    return 0;
}