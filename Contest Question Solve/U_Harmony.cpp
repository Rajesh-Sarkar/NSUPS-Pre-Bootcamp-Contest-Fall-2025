#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin >> a >> b;
    long long int sum;
    sum=a+b;
    if(sum%2!=0)
    {
        cout <<"IMPOSSIBLE";
    }
    else
    {
        cout <<sum/2;
    }
    return 0;
}