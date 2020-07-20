#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize x, n, p, and sol to 0 for now
    int x, n, p, sol = 0;

    //Take in x and n
    cin >> x >> n;

    //Iterate n times
    while (n--)
    {
        //Take in p, and add unused time to sol
        cin >> p;
        sol += x - p;
    }

    //Output sol plus the time for next month too
    cout << sol + x;
}