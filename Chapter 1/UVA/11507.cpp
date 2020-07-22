#include <bits/stdc++.h>

using namespace std;

int main()
{
    //I map pairs of (initial, operation) to final
    //It was tedious to think about, but I think it's the cleanest way to do it
    //I can't use unordered map since it requires hashing strings
    map<pair<string, string>, string> dirMap =
    {
        {{"+x", "+y"}, "+y"}, {{"+x", "-y"}, "-y"}, {{"+x", "+z"}, "+z"}, {{"+x", "-z"}, "-z"},
        {{"-x", "+y"}, "-y"}, {{"-x", "-y"}, "+y"}, {{"-x", "+z"}, "-z"}, {{"-x", "-z"}, "+z"},
        {{"+y", "+y"}, "-x"}, {{"+y", "-y"}, "+x"}, {{"+y", "+z"}, "+y"}, {{"+y", "-z"}, "+y"},
        {{"-y", "+y"}, "+x"}, {{"-y", "-y"}, "-x"}, {{"-y", "+z"}, "-y"}, {{"-y", "-z"}, "-y"},
        {{"+z", "+y"}, "+z"}, {{"+z", "-y"}, "+z"}, {{"+z", "+z"}, "-x"}, {{"+z", "-z"}, "+x"},
        {{"-z", "+y"}, "-z"}, {{"-z", "-y"}, "-z"}, {{"-z", "+z"}, "+x"}, {{"-z", "-z"}, "-x"}
    };

    //Initialize l and a string
    int l;
    string s;

    //Keep taking in l until it's 0
    while (cin >> l && l)
    {
        //Decrement since there's l-1 operations
        l--;

        //Keeps track of current direction
        string current = "+x";
        
        //Iterate l-1 times
        while (l--)
        {
            //Take in s, and update current if s isn't No using map
            cin >> s;
            if (s != "No") current = dirMap[make_pair(current, s)];
        }

        //Output current at the end
        cout << current << endl;
    }
}