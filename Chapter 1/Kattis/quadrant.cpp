#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in x and y
    int x, y;
    cin >> x >> y;

    //Since there are no axis cases, just 4 cases for each quadrant based on pos and neg
    if (x > 0 && y > 0) cout << 1;
    else if (x < 0 && y > 0) cout << 2;
    else if (x < 0 && y < 0) cout << 3;
    else cout << 4;
}