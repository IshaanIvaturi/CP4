#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in t, keep track of total allowed
    int t, allowed = 0;
    cin >> t;

    //Initialize doubles for dimensions and weight
    double length, width, depth, weight;

    //Iterate t times
    while (t--)
    {
        //Take in parameters
        cin >> length >> width >> depth >> weight;

        //If weight over 7, automatically not allowed
        if (weight > 7) cout << 0 << endl;

        //If dimensions add under 125 or all dimensions are met, allowed and increment allowed
        else if (length + width + depth <= 125 || length <= 56 && width <= 45 && depth <= 25) 
        {
            cout << 1 << endl;
            allowed++;
        }

        //Otherwise, not allowed
        else cout << 0 << endl;
    }

    //Output total allowed
    cout << allowed << endl;
}