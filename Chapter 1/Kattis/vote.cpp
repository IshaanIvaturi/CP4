#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, n, and array for votes, take in t
    int t, n, votes[15];
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in n, set total votes to 0
        cin >> n;
        int totalVotes = 0;

        //Take in all the votes, and sum up totalvotes
        for (int i = 0; i < n; i++) 
        {
            cin >> votes[i];
            totalVotes += votes[i];
        }
        
        //Get max number of votes, number of winners and actual winner are set to 0
        int mostVotes = *max_element(votes, votes+n), winnerCount = 0, winner = 0;

        //Go through votes, check if they match max, increment winner count and set winner
        for (int i = 0; i < n; i++)
        {
            if (votes[i] == mostVotes)
            {
                winnerCount++;
                winner = i+1;
            }
        }

        //If more than 1 max count, no winner
        if (winnerCount > 1) cout << "no winner" << endl;

        //If the most votes is more than half, majority winner
        else if (mostVotes*2 > totalVotes) cout << "majority winner " << winner << endl;

        //Otherwise, minority winner
        else cout << "minority winner " << winner << endl;
    }
}