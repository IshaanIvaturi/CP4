#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n, k, a string s, and string for name
    int n, k;
    string s, name;

    //I use getline and stoi since there are spaces later
    getline(cin, s);
    n = stoi(s);

    //Iterate n times
    while (n--)
    {
        //Take n k, set bools for peasoup and pancakes to false
        getline(cin, s);
        k = stoi(s);
        bool peaSoup = false, pancakes = false;

        //Take in name
        getline(cin, name);

        //Iterate k times
        while (k--)
        {
            //Get the menu item, update peaSoup and pancakes to true if possible
            getline(cin, s);
            if (s == "pea soup") peaSoup = true;
            else if (s == "pancakes") pancakes = true;
        }

        //If both of them are true, output the name and exit
        if (peaSoup && pancakes)
        {
            cout << name;
            return 0;
        }
    }

    //Otherwise, anywhere is fine
    cout << "Anywhere is fine I guess";
}