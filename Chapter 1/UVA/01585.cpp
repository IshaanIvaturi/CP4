#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in t
    int t;
    cin >> t;

    //Set variable for input
    string s;

    //Iterate t times
    while (t--)
    {
        //Take in string
        cin >> s;

        //Consec is how many O's before, score is solution
        //Both set to 0 initially
        int consec = 0, score = 0;

        //Iterate through each character
        for (char c : s)
        {
            //If it's an O, increment consec and then add to score
            if (c == 'O') score += ++consec;

            //Otherwise, just reset consec
            else consec = 0;
        }

        //Output final score
        cout << score << endl;
    }
}