#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    double denom = n, numer = 0;

    while (n--)
    {
        cin >> x;

        if (x == -1) denom--;
        else numer += x;
    }

    printf("%.4f", numer/denom);
}