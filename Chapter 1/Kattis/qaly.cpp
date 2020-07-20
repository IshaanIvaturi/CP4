#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in n
    int n;
    cin >> n;

    //Initialize doubles for q and y, as well as solution set to 0
    double q, y, sol = 0;

    //Iterate n times
    while (n--)
    {
        //Take in q and y, add their product to sol
        cin >> q >> y;
        sol += q*y;
    }

    //Output sol
    cout << sol;
}