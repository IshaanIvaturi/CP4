#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in t
    int t;
    cin >> t;

    //Initialize string
    string s;

    //Iterate t times
    while (t--)
    {
        //Take in string
        cin >> s;

        //This vector stores the index of the last time we were at this depth
        vector<int> lastDepth(10005);

        //I set depth to max depth, since if it goes all the way up it won't try to update array
        //But if it goes all the way down it will (you'll see later)
        int depth = 10000, water = 0;

        //Iterate through string
        for (int i = 0; i < s.length(); i++)
        {
            //If backslash
            if (s[i] == '\\')
            {
                //Set the last depth here to the next index, decrease depth
                lastDepth[depth] = i+1;
                depth--;
            }

            //If forwardslash AND we've visited this depth before going down (not 0)
            else if (s[i] == '/' && lastDepth[depth+1])
            {
                //Add one strip of water back to last visit, +1 for the 2 half blocks
                water += i - lastDepth[depth+1] + 1;

                //Incremenet depth, and reset this to "unvisited" status
                depth++;
                lastDepth[depth] = 0;
            }
        }

        //Output water
        cout << water << endl;
    }
}