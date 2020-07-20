#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, l, w, h and take in t
    int t, l, w, h;
    cin >> t;

    //Count from i to t for case numbers
    for (int i = 1; i <= t; i++)
    {
        //Take in dimensions
        cin >> l >> w >> h;

        //Check if any of them are over 20, then it's bad, otherwise good
        //Printf is easier than cout for the text formatting
        if (l > 20 || w > 20 || h > 20) printf("Case %d: bad\n", i);
        else printf("Case %d: good\n", i);
    }
}