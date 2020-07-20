#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and n, as well as previous pipe and current pipe, take in t
    int t, n, prev, current;
    cin >> t;

    //Iterate from 1 to t, i is the case number
    for (int i = 1; i <= t; i++)
    {
        //Counters for high and low
        int high = 0, low = 0;

        //Take in n, and the first pipe as previous pipe
        cin >> n >> prev;

        //Iterate n-1 times for the rest of the pipes
        for (int j = 1; j < n; j++)
        {
            //Take in the pipe as current pipe
            cin >> current;

            //Increment high and low as needed
            if (current > prev) high++;
            else if (current < prev) low++;

            //Now set this to the previous for the next pipe
            prev = current;
        }

        //Printf formatting was easier than cout
        printf("Case %d: %d %d\n", i, high, low);
    }
}