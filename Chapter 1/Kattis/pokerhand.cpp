#include <bits/stdc++.h>

using namespace std;

int main()
{
    //I use a map to keep track of counts for each card
    unordered_map<char, int> counts;

    //Initialize string for each card, var for max count
    string s;
    int maxCount = 0;

    //Go through all 5 cards
    for (int i = 0; i < 5; i++)
    {
        //Take in s, increment the count of the first character, update max
        cin >> s;
        counts[s[0]]++;
        maxCount = max(maxCount, counts[s[0]]);
    }

    //Output max count
    cout << maxCount;
}