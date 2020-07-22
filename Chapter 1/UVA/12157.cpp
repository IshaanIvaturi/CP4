#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in t, initialize n, and var for times
    int t, n, x;
    cin >> t;

    //i goes from 1 to t, case number
    for (int i = 1; i <= t; i++)
    {
        //Take in n, initialize prices to 0
        cin >> n;
        int mile = 0, juice = 0;

        //Iterate n times
        while (n--)
        {
            //Take in time and update mile and juice prices
            cin >> x;
            mile += (x / 30 + 1) * 10;
            juice += (x / 60 + 1) * 15;
        }

        //Lowest cost is minimum
        int minPrice = min(mile, juice);

        //Output case number, mile or juice if they apply, and minPrice
        cout << "Case " << i << ": ";
        if (mile == minPrice) cout << "Mile ";
        if (juice == minPrice) cout << "Juice ";
        cout << minPrice << endl;
    }
}