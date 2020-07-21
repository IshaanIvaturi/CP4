#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize l, x, p, current people and denied groups, take in l and x
    int l, x, p, current = 0, denied = 0;
    cin >> l >> x;

    //Holds enter or leave
    string s;

    //Iterate x times
    while (x--)
    {
        //Take in enter/leave, number of people
        cin >> s >> p;

        //If entering
        if (s == "enter")
        {
            //If they can fit, update current, otherwise increment denied
            if (current + p <= l) current += p;
            else denied++;
        }

        //If they're leaving, just update current
        else current -= p;
    }

    //Output denied
    cout << denied;
}