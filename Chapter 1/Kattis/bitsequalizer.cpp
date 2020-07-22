#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in c
    int c;
    cin >> c;

    //Initialize s and t
    string s, t;

    //Iterate through cases, x represents case
    for (int x = 1; x <= c; x++)
    {
        //Take in s and t
        cin >> s >> t;

        //Initialize solution, 0's that need to change, 1's that need to change, and 1 counts for each
        int sol = 0, zChange = 0, oChange = 0, s1Count = 0, t1Count = 0;

        //Iterate through length
        for (int i = 0; i < s.length(); i++)
        {
            //Update 1 counts
            if (s[i] == '1') s1Count++;
            if (t[i] == '1') t1Count++;

            //A ? will have to be changed regardless, increment sol
            if (s[i] == '?') sol++;

            //Increment zeros to be changed and ones to be changed
            if (s[i] == '0' && t[i] == '1') zChange++;
            if (s[i] == '1' && t[i] == '0') oChange++;
        }

        //Impossible to get rid of 1's so if s1count is higher, -1
        if (s1Count > t1Count)
        {
            cout << "Case " << x << ": " << -1 << endl;
            continue;
        }

        //Swap as many 0's and 1's as possible, then change the rest
        sol += min(zChange, oChange) + abs(zChange - oChange);

        //Output case and solution
        cout << "Case " << x << ": " << sol << endl;
    }
}