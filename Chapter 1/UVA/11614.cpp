#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and n as long longs, take in t
    long long t, n;
    cin >> t;

    //Iterate t times and take in n
    while (t-- && cin >> n)
    {
        //By solving the quadratic equation sol(sol+1)/2 = n and then casting to long long, I get the answer
        cout << (long long) (sqrt(1 + 8*n) - 1) / 2 << endl;
    }
}