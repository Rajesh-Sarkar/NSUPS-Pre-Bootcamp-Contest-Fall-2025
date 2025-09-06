#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int digit;
    bool lucky = false;
    int lucky_count=0;
    while(n>0)
    {
        digit=n%10;
        if(digit==7 || digit==4)
        {
            lucky=true;
            lucky_count++;
        }
        n=n/10;
    }
    if(lucky_count==4 || lucky_count==7)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }
}