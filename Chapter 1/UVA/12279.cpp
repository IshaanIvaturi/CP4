#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n, int for holding entries, and case number to 0
    int n, e, c = 0;
    
    //Keep taking in n as long as n isn't zero
    //Increment before var so that it increments before checking and c isn't 0
    while (cin >> n && n && ++c)
    {
        //Counter for balance
        int balance = 0;

        //Iterate n times
        while (n--)
        {
            //Take in an event
            cin >> e;

            //If it's greater than 0, increment, else decrement
            if (e) balance++;
            else balance--;
        }

        //Used printf for formatting
        printf("Case %d: %d\n", c, balance);
    }
}