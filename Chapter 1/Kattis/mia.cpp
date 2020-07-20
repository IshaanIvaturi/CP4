#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize values
    int s0, s1, r0, r1;

    //Keep taking them in until s0 is 0
    while (cin >> s0 >> s1 >> r0 >> r1 && s0)
    {
        //s and r are "scores" that I assign
        int s = 0, r = 0;

        //If they add to 3, they get 1000 which dwarfs other options
        if (s0 + s1 == 3) s += 1000;
        if (r0 + r1 == 3) r += 1000;

        //If they have a double, they get the value times 10, won't alter the 1000 but dwarfs non doubles
        if (s0 == s1) s += (s0*10 + s0) * 10;
        if (r0 == r1) r += (r0*10 + r0) * 10;

        //Finally, I add the highest number lowest number value, insignificant if beaten by a double or mia
        s += max(s0, s1) * 10 + min(s0, s1);
        r += max(r0, r1) * 10 + min(r0, r1);

        //Now just compare scores
        if (s > r) cout << "Player 1 wins." << endl;
        else if (r > s) cout << "Player 2 wins." << endl;
        else cout << "Tie." << endl;
    }
}