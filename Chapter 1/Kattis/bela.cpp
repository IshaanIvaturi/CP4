#include <bits/stdc++.h>

using namespace std;

int main()
{
    //I mapped values to points for both dominant and non dominant suits
    unordered_map<char, int> 
    dominant =
    {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}
    }, 
    notDominant =
    {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}
    };

    //Initialize n, solution to 0, char and string
    int n, points = 0;
    char b;
    string s;

    //Take in n and b, I need 4n iterations
    cin >> n >> b;
    n *= 4;

    //Iterate 4n times
    while (n--)
    {
        //Take in card
        cin >> s;

        //Add to points based on dominant suit or not
        if (s[1] == b) points += dominant[s[0]];
        else points += notDominant[s[0]];
    }

    //Output points
    cout << points;
}