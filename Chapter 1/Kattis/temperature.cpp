#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Set up doubles for double calculation, take them in
    double X, Y;
    cin >> X >> Y;

    //If they have the same rate of increase
    if (Y == 1)
    {
        //Same starting point means every temp is the same
        if (X == 0) cout << "ALL GOOD";

        //Otherwise, none are
        else cout << "IMPOSSIBLE";
    }

    //If they have different rates they will intersect
    else
    {
        //Using line formulas you can derive this, intersect of y=x and y=Y(x+X)
        //.7f for proper precision
        printf("%.7f", X/(1-Y));
    }
    
}