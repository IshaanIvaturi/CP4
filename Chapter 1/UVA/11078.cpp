#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, n, i (for each score) and take in t
    int t, n, i;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in n and the first score
        cin >> n >> i;

        //The most senior score is first, and the solution is set to a really low number
        int mostSenior = i, maxDiff = INT_MIN;

        //Iterate through the rest of the scores
        for (int j = 1; j < n; j++)
        {
            //Take in score
            cin >> i;

            //Check if most senior minus this is bigger than current solution
            maxDiff = max(maxDiff, mostSenior - i);

            //Update most senior if this student has a higher score
            mostSenior = max(mostSenior, i);
        }

        //Output solution
        cout << maxDiff << endl;
    }
}