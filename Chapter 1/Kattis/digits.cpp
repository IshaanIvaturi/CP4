#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Best stored as a string, too large for int type
    string s;

    //Keep taking in s until it's END
    while (cin >> s && s != "END")
    {
        //Special case for 1, as it's already done
        if (s == "1")
        {
            cout << 1 << endl;
            continue;
        }

        //Otherwise, once it reaches 1 digit it'll take 2 more iterations
        //I start the solution at 2 to account for this
        int i = 2;

        //Keep going until it reaches 1 digit
        while (s.length() != 1)
        {
            //Convert s to a string version of its length, increment solution
            s = to_string(s.length());
            i++;
        }

        //Output solution
        cout << i << endl;
    }
}