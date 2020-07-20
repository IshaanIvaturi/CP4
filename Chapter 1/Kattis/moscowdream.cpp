#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in a, b, c, n
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    //Check if any are zero, n < 3, or there aren't enough problems
    if (a == 0 || b == 0 || c == 0 || n < 3 || a+b+c < n) cout << "NO";
    else cout << "YES";
}