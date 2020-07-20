#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and n and take in t
    int t, n;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in n
        cin >> n;

        //It looks complicated, but it's just the given formula
        //Mod by 100 and divide by 10 to get 10s place
        cout << abs(((n*567/9+7492)*235/47-498) % 100 / 10) << endl;
    }
}