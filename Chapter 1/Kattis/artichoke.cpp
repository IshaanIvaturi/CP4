#include <bits/stdc++.h>

using namespace std;

//Initialize variables
int p, a, b, c, d, n;

//Price function, exactly as given
double price(int k)
{
    return p * (sin(a*k + b) + cos(c*k + d) + 2);
}

int main()
{
    //Take in all the variables
    cin >> p >> a >> b >> c >> d >> n;

    //Keep track of current max price and max drop as doubles, very low numbers at first
    double maxPrice = INT_MIN;
    double maxDrop = INT_MIN;

    //Iterate from 1 to n for each day
    for (int i = 1; i <= n; i++)
    {
        //Check if the price function today is a bigger drop from max price than max drop
        maxDrop = max(maxDrop, maxPrice - price(i));

        //Update max price if today's price is the highest
        maxPrice = max(maxPrice, price(i));
    }

    //Don't let it go below zero, printf with proper precision
    maxDrop = max(maxDrop, 0.0);
    printf("%.7f", maxDrop);
}