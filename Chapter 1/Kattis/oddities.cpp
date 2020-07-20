#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n and x, take in n
    int n, x;
    cin >> n;

    //Iterate n times
    while (n--)
    {
        //Take in x
        cin >> x;

        //Check modulo 2 for even or odd
        if (x % 2 == 0) cout << x << " is even" << endl;
        else cout << x << " is odd" << endl;
    }
}