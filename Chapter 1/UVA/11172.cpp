#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, a, b and take in t
    int t, a, b;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in a and b each time
        cin >> a >> b;

        //Simple if statements to determine relationship
        if (a < b) cout << "<" << endl;
        else if (a > b) cout << ">" << endl;
        else cout << "=" << endl;
    }
}