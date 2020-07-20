#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n and i (each day), take in n
    //Set the minimum debris to a large value, solution to 0
    int n, i, min = INT_MAX, index = 0;
    cin >> n;

    //Iterate through each day
    for (int j = 0; j < n; j++)
    {
        //Take in amount of debris
        cin >> i;

        //If it's less than the current min
        if (i < min)
        {
            //Set the current min, and update solution
            min = i;
            index = j;
        }
    }

    //Output final index
    cout << index;
}