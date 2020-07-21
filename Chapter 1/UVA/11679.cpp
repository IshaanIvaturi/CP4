#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables including simulation array (size > 20 so no out of bounds)
    int b, n, reserves[25], d, c, v;

    //Keep taking in b and n as long as b isn't 0
    while (cin >> b >> n && b)
    {
        //Take in the b reserves
        for (int i = 0; i < b; i++) cin >> reserves[i];

        //For the next n lines
        for (int i = 0; i < n; i++)
        {
            //Take in debtor, creditor, value
            cin >> d >> c >> v;

            //The debtor loses v and the creditor gets it
            //Subtract 1 to convert to 0-based indexing
            reserves[d-1] -= v;
            reserves[c-1] += v;
        }

        //Placeholder variable for solution, S by default
        char sol = 'S';

        //Go through all the reserves
        for (int i = 0; i < b; i++)
        {
            //If any are negative, set sol to N
            if (reserves[i] < 0)
            {
                sol = 'N';
                break;
            }
        }
        
        //Output sol
        cout << sol << endl;     
    }
}