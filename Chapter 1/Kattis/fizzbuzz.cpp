#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in x, y, n
    int x, y, n;
    cin >> x >> y >> n;

    //i counts from 1 to n
    for (int i = 1; i <= n; i++)
    {
        //If it's divisible by both x and y, replace i with fizzbuzz
        if (i % x == 0 && i % y == 0) cout << "FizzBuzz" << endl;

        //If just one of them, replace with fizz or buzz
        else if (i % x == 0) cout << "Fizz" << endl;
        else if (i % y == 0) cout << "Buzz" << endl;

        //Otherwise, just output i
        else cout << i << endl;
    }
}