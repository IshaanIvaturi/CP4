#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in n
    int n;
    cin >> n;

    //Store the grid as a vector of strings
    vector<string> grid(5);

    //Take in the 5 strings
    for (int i = 0; i < 5; i++) cin >> grid[i];

    //Iterate for each character I'm recognizing
    for (int i = 0; i < n; i++)
    {
        //4th row alone identifies number
        //I check from 4*i to get to each character position
        if (grid[3][4*i] == '*') cout << 2;
        else if (grid[3][4*i+1] == '*') cout << 1;
        else cout << 3;
    }

    //Finally output a newline (was WA without it)
    cout << endl;
}