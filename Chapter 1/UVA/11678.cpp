#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables
    int a, b, x;

    //Keep taking in a and b while they're not 0
    while (cin >> a >> b && a+b)
    {
        //I use sets since they remove duplicates
        unordered_set<int> alice, betty;

        //Insert cards for both
        while (a--)
        {
            cin >> x;
            alice.insert(x);
        }
        while (b--)
        {
            cin >> x;
            betty.insert(x);
        }

        //Keep track of sizes, I'll update later
        int aliceSize = alice.size(), bettySize = betty.size();
        
        //Go through all the cards in one
        for (int card : alice)
        {
            //If it's found in one, the sizes will reduce by 1
            if (betty.find(card) != betty.end())
            {
                aliceSize--;
                bettySize--;
            }
        }

        //Output the lower size, since they'll trade all their eligible cards
        cout << min(aliceSize, bettySize) << endl;
    }
}