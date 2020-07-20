#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in t
    int t;
    cin >> t;

    //Initialize a string for inputs
    string s;

    //Iterate t times
    while (t--)
    {
        //Take input
        cin >> s;

        //If it's P=NP, output skipped
        if (s == "P=NP") cout << "skipped" << endl;

        //Otherwise..
        else
        {
            //I use find to find the +, and then stoi to evaluate each substring to an int
            int term1 = stoi(s.substr(0, s.find("+")));
            int term2 = stoi(s.substr(s.find("+") + 1));

            //Output the sum
            cout << term1 + term2 << endl;
        }
    }
}