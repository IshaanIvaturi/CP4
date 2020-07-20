#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize x and y
    int x, y;

    //Keep taking them in until they're both 0
    while (cin >> x >> y && x + y != 0)
    {
        //No matter what, if they add to 13 output never speak again
        if (x + y == 13) cout << "Never speak again." << endl;

        //Otherwise, it's based on greater than, less than, or equal
        else if (x > y) cout << "To the convention." << endl;
        else if (x < y) cout << "Left beehind." << endl;
        else cout << "Undecided." << endl;
    }
}