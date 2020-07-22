#include <bits/stdc++.h>

using namespace std;

int main()
{

    //Initialize n, i, j
    int n, i, j;

    //Keep taking them in
    while (cin >> n >> i >> j)
    {
        //The default answer is round 1
        int round = 1;

        //Keep iterating till broken
        while (true)
        {
            //i and j simplify to match (n+1)/2 every round
            i = (i+1) / 2;
            j = (j+1) / 2;

            //Keep going until they are the same match, increment solution when they aren't
            if (i == j) break;
            round++;
        }

        //Output the round they match
        cout << round << endl;
    }
}