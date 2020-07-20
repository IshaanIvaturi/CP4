#include <bits/stdc++.h>

using namespace std;

int main()
{
    //I created a map which maps the word with the language, simpler than if statement
    unordered_map<string, string> languages = {
        {"HELLO", "ENGLISH"}, {"HOLA", "SPANISH"}, {"HALLO", "GERMAN"}, 
        {"BONJOUR", "FRENCH"}, {"CIAO", "ITALIAN"}, {"ZDRAVSTVUJTE", "RUSSIAN"}
        };
    
    //C keeps track of the case number, s holds the string
    int c = 1;
    string s;

    //I used getline since s might have spaces, keep going until s is #
    while (getline(cin, s) && s != "#")
    {
        //I used printf to print the case since it's easier than cout here
        printf("Case %d: ", c);

        //If there is no entry in map, it's unknown
        if (languages[s] == "") cout << "UNKNOWN" << endl;

        //Otherwise, output the map entry
        else cout << languages[s] << endl;

        //Finally, increment c
        c++;
    }
}