#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables
    int n, b, h, w, p, a;

    //Keep taking in n, b, h, w
    while (cin >> n >> b >> h >> w)
    {
        //Minimum cost is set really large at first
        int minCost = INT_MAX;

        //Iterate h times
        while (h--)
        {
            //Take in price
            cin >> p;

            //For each week, if there's enough beds update minCost with n*p or total price
            for (int i = 0; i < w; i++)
            {
                cin >> a;
                if (a >= n) minCost = min(minCost, n*p);
            }
        }

        //If minCost is more than budget, stay home, otherwise output min cost
        if (minCost > b) cout << "stay home" << endl;
        else cout << minCost << endl;
    }
}