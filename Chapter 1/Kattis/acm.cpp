#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize m, number solved to 0, penalty to 0, c for problem, s for right/wrong
    int m, solved = 0, penalty = 0;
    char c;
    string s;

    //Will map problem character to penalty accrued by wrong answers
    unordered_map<char, int> penalties;

    //Keep taking in m until it's -1
    while (cin >> m && m != -1)
    {
        //If not -1, take in c and s
        cin >> c >> s;

        //If correct answer
        if (s == "right")
        {
            //Increment solved, add minutes to penalty, and only now add penalties accrued by prob
            solved++;
            penalty += m + penalties[c];
        }

        //Otherwise, increment that problem's penalty by 20 for if it's solved later
        else penalties[c] += 20;
    }

    //Output solved and penalty
    cout << solved << " " << penalty;
}