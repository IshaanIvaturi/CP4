#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, n, m and take in t
    int t, n, m;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in n and m
        cin >> n >> m;
        
        //Simply divide each by 3 (truncated) and multiply
        cout << (n/3) * (m/3) << endl;
    }
}