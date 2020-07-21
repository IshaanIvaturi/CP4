#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and n, take in t
    int t, n;
    cin >> t;

    //Initialize string for instructions
    string s;

    //Iterate t times
    while (t--)
    {
        //Take in n, initialize string vector of size n
        cin >> n;
        vector<string> instructions(n);

        //SameAs holds reference, pos is current pos
        int sameAs, pos = 0;

        //Iterate through instructions
        for (int i = 0; i < n; i++)
        {
            //Take in first word
            cin >> s;

            //If it's left or right
            if (s != "SAME")
            {
                //Set instructions array, update position
                instructions[i] = s;
                if (s == "RIGHT") pos++;
                else pos--;
            }

            //If it's same as
            else
            {
                //Take in the word as, and the number index
                cin >> s >> sameAs;

                //Update instructions array, and position
                instructions[i] = instructions[sameAs-1];
                if (instructions[i] == "RIGHT") pos++;
                else pos--;
            }
        }

        //Output final position
        cout << pos << endl;
    }
}