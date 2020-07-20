#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in a and b
    int a, b;
    cin >> a >> b;

    //Subtract the hundreds and ones, then swap their decimal place
    a = a - a % 10 - (a / 100 * 100) + a % 10 * 100 + a / 100;
    b = b - b % 10 - (b / 100 * 100) + b % 10 * 100 + b / 100;

    //Output the larger one, if they're equal either is fine
    if (a > b) cout << a;
    else cout << b;
}