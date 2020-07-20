#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n, int for sample numbers, case number to zero
    int n, x, c = 0;

    //Keep taking in n and incrementing case before it checks (since it starts at 0)
    while (cin >> n && ++c)
    {
        //Set smallest to very large number, largest to very small
        int smallest = INT_MAX, largest = INT_MIN;

        //Iterate n times
        while (n--)
        {
            //Take in x, update smallest and largest
            cin >> x;
            smallest = min(smallest, x);
            largest = max(largest, x);
        }

        //Use printf for formatting, output case, smallest, largest, range is largest-smallest
        printf("Case %d: %d %d %d\n", c, smallest, largest, largest-smallest);
    }
}