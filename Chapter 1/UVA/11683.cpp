#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize a, c, previous height, current height, solution
    int a, c, prev, current, sol;

    //Keep taking in a until it's 0
    while (cin >> a && a != 0)
    {
        //Take in c and prev, have to go at least a-prev depth
        cin >> c >> prev;
        sol = a - prev;

        //Iterate through the rest of the heights
        for (int i = 1; i < c; i++)
        {
            //Take in current height
            cin >> current;

            //There's only another segment if it goes down
            //If so, you add prev - current layers
            if (current < prev) sol += prev - current;

            //Update prev to current for next
            prev = current;
        }

        //Output solution
        cout << sol << endl;
    }
}