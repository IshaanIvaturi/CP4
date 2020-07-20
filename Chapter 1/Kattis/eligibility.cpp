#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and course number, take in t
    int t, courses;
    cin >> t;

    //Initialize name, beginning of undergrad, and birth day as strings
    string name, began, birth;

    //Iterate t times
    while (t--) 
    {
        //Take in all the student info
        cin >> name >> began >> birth >> courses;

        //I use stoi and substr to get just the year, I check their birth and beginning of undergrad
        if (stoi(began.substr(0, 4)) >= 2010 || stoi(birth.substr(0, 4)) >= 1991) cout << name << " eligible" << endl;

        //If they aren't eligible AND > 40 courses, ineligible
        else if (courses > 40) cout << name << " ineligible" << endl;

        //Otherwise, coach petitions
        else cout << name << " coach petitions" << endl;
    }
}