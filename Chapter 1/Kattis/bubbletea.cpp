#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables and arrays to keep track of price, minimum price bubble tea, etc
    int n, nPrice[1005], m, mPrice[1005], k, x, minPrice = INT_MAX, money;

    //Take in n and all its prices
    cin >> n;
    for (int i = 0; i < n; i++) cin >> nPrice[i];

    //Take in m and all its prices
    cin >> m;
    for (int i = 0; i < m; i++) cin >> mPrice[i];

    //Iterate through the next n lines
    for (int i = 0; i < n; i++)
    {
        //Take in k
        cin >> k;

        //Iterate k times
        while (k--)
        {
            //Take in x, update the minPrice with cost
            cin >> x;
            minPrice = min(minPrice, nPrice[i] + mPrice[x-1]);
        }
    }

    //Take in the amount of money he has
    cin >> money;

    //Divide money by minPrice, subtract 1 to account for him, but don't let it go under 0
    cout << max(money / minPrice - 1, 0);
}