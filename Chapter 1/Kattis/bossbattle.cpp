#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in n
    int n;
    cin >> n;

    //It only takes 1 if n is 3 or less
    if (n <= 3) cout << 1;

    //Otherwise, the rule is n-2
    else cout << n-2;
}