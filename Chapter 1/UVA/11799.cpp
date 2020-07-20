#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, n, c and take in t
    int t, n, c;
    cin >> t;

    //Iterate from 1 to t, i is the case number
    for (int i = 1; i <= t; i++)
    {
        //Set current max to 0 and take in n
        int speed = 0;
        cin >> n;

        //Iterate n times
        while (n--)
        {
            //Take in new number, update max speed
            cin >> c;
            speed = max(speed, c);
        }
        
        //Printf easier than cout for formatting, output case and max speed
        printf("Case %d: %d\n", i, speed);
    }
}