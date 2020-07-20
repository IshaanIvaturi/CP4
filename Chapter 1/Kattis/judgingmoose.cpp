#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in l and r
    int l, r;
    cin >> l >> r;

    //If both zero, output not a moose and exit program
    if (l+r == 0)
    {
        cout << "Not a moose";
        return 0;
    }

    //Depending on if they are equal, output even or odd
    if (l == r) cout << "Even ";
    else cout << "Odd ";

    //Then, no matter what output double the higher one
    cout << max(l, r) * 2;
}