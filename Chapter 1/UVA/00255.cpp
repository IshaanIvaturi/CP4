#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize king, queen, move
    int k, q, m;

    //Keep taking in positions
    while (cin >> k >> q >> m)
    {
        //If king is on top of queen, illegal state
        if (k == q)
        {
            cout << "Illegal state" << endl;
            continue;
        }

        //Extract rows and columns of positions with / and %
        int ki = k/8, kj = k%8, qi = q/8, qj = q%8, mi = m/8, mj = m%8;

        //If queen left her row and col, queen didn't move, or moved onto king, illegal move
        if (mi != qi && mj != qj || q == m || k == m) cout << "Illegal move" << endl;

        //If queen, king, move are in same row and col, and king is in the middle, illegal move
        else if (mi == qi && mi == ki && mj > qj && kj < mj && kj > qj) cout << "Illegal move" << endl;
        else if (mi == qi && mi == ki && mj < qj && kj > mj && kj < qj) cout << "Illegal move" << endl;
        else if (mj == qj && mj == kj && mi > qi && ki < mi && ki > qi) cout << "Illegal move" << endl;
        else if (mj == qj && mj == kj && mi < qi && ki > mi && ki < qi) cout << "Illegal move" << endl;

        //If king and move are in same row or col and spaced by 1, move not allowed
        else if (ki == mi && abs(kj - mj) == 1 || kj == mj && abs(ki - mi) == 1) cout << "Move not allowed" << endl;

        //Hardcoded where king is in corner and queen traps it, stop
        else if (k == 0 && m == 9 || k == 7 && m == 14 || k == 56 && m == 49 || k == 63 && m == 54) cout << "Stop" << endl;

        //If everything went through, continue
        else cout << "Continue" << endl;
    }
}