#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize string for rows and int for number of characters reached
    string s;
    int numChars;

    //Keep going until eof signal
    while (!cin.eof())
    {
        //Vector of strings for grid, and map from char to grid locations
        vector<string> grid;
        unordered_map<char, pair<int, int>> locations;

        //Since I start at 0 and draw numChars-1 lines, I start at -1
        numChars = -1;

        //Keep taking in s until it's a blank line
        while (getline(cin, s) && s != "")
        {
            //Go through the whole string
            for (int i = 0; i < s.length(); i++)
            {
                //If it's a character, update locations and increment numChars
                if (s[i] != '.') 
                {
                    locations[s[i]] = {grid.size(), i};
                    numChars++;
                }
            }

            //Push back string to grid
            grid.push_back(s);
        }

        //Initial character is 0, set prevLoc to its location
        char c = '0';
        pair<int, int> prevLoc = locations[c], curLoc;

        //If there were any characters found...
        if (numChars != -1)
        {
            //Iterate for numChars-1 times essentially
            while (numChars--)
            {
                //Increment current char, including conversions from 9 and z
                if (c == '9') c = 'a';
                else if (c == 'z') c = 'A';
                else c++;

                //Set curLoc to location of new char
                curLoc = locations[c];

                //If it's same row as previous...
                if (prevLoc.first == curLoc.first)
                {
                    //Go from min col to max col, update to - and + if necessary
                    for (int i = min(prevLoc.second, curLoc.second)+1; i < max(prevLoc.second, curLoc.second); i++)
                    {
                        if (grid[prevLoc.first][i] == '.') grid[prevLoc.first][i] = '-';
                        else if (grid[prevLoc.first][i] == '|') grid[prevLoc.first][i] = '+';
                    }
                }

                //If it's the same col, just do the opposite and update with | instead
                else
                {
                    for (int j = min(prevLoc.first, curLoc.first)+1; j < max(prevLoc.first, curLoc.first); j++)
                    {
                        if (grid[j][prevLoc.second] == '.') grid[j][prevLoc.second] = '|';
                        else if (grid[j][prevLoc.second] == '-') grid[j][prevLoc.second] = '+';
                    }
                }

                prevLoc = curLoc;
            }
        }

        //Regardless of how many characters were found, output the grid and then a blank line
        for (string row : grid) cout << row << endl;
        cout << endl;
    }
}