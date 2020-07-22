#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Store all the combos of 3, as well as a map for the counters
    vector<string> combos = {"RBL", "RLB", "BRL", "BLR", "LRB", "LBR"};
    unordered_map<char, char> counters = {{'R', 'S'}, {'B', 'K'}, {'L', 'H'}};

    //Initialize and take in attacks
    string s;
    cin >> s;

    //This keeps track of the starting indices of each combo attack
    vector<bool> comboIndices(s.length(), 0);

    //Iterate all the way to the length, not s-3 since length can be less than 3
    for (int i = 0; i < s.length(); i++)
    {
        //Iterate through all my combos
        for (string combo : combos)
        {
            //If the substring of 3 from here is the combo, set to true
            //If it's out of bounds, it just won't equal, so it's fine
            if (s.substr(i, 3) == combo) comboIndices[i] = true;
        }
    }

    //Iterate through the string again
    for (int i = 0; i < s.length(); i++)
    {
        //If there's a combo, output C and jump ahead an additional 2
        if (comboIndices[i])
        {
            cout << 'C';
            i += 2;
        }

        //Otherwise, output the proper counter here
        else cout << counters[s[i]]; 
    }
}