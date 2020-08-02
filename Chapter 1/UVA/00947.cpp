#include <bits/stdc++.h>

using namespace std;

//Initialize variables in global space to use in method
//Test cases, given correct and wrong, solution and variables for correct/wrong
int t, correct, wrong, sol, c, w;

//Given guess, maps for occurrences of characters
string guess;
unordered_map<char, int> sCounts, guessCounts;

//I opted for a complete search, all the edge cases are near impossible in a constructive algo
//Also, the max to check is 9^5 or about 60000, easily searchable
void solve(string s)
{
    //If I've reached the final length...
    if (s.length() == guess.length())
    {
        //Clear my occurence maps and reset c to 0
        sCounts.clear();
        guessCounts.clear();
        c = 0;

        //Go through all the character indices
        for (int i = 0; i < s.length(); i++)
        {
            //If the place matches, increment correct places
            if (s[i] == guess[i]) c++;

            //Always increment occurrence maps for characters
            sCounts[s[i]]++;
            guessCounts[guess[i]]++;
        }

        //Start wrong at -c, since they'll be double counted
        w = -c;

        //From 1 to 9, add the minimum occurrence counts between both of them, correct places
        for (int i = 1; i <= 9; i++) w += min(sCounts[char(i+'0')], guessCounts[char(i+'0')]);
        
        //If it matches the stats we are given, increment solution
        if (c == correct && w == wrong) sol++;
    }

    //If we're still under desired length...
    else
    {
        //Iterate through the integers from 1 to 9
        for (int i = 1; i <= 9; i++)
        {
            //Add the integer to s, solve from there, and backtrack
            s += char(i+'0');
            solve(s);
            s.pop_back();
        }
    }
}

//With our solve function, main is very simple
int main()
{
    //Take in t
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Reset sol to 0, take in guess correct and wrong
        sol = 0;
        cin >> guess >> correct >> wrong;

        //Solve starting from an empty string for all possibilities
        solve("");

        //Output whatever's stored in sol now
        cout << sol << endl;
    }
}