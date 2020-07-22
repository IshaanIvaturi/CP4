#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables and take in t
    int t, n, m, k;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in n and m
        cin >> n >> m;

        //Requirements holds stickers for each prize
        vector<vector<int>> requirements(n);

        //Prizes holds prize amt for each prize, stickers holds amt of each sticker
        vector<int> prizes(n), stickers(m);

        //Iterate through all the prizes
        for (int i = 0; i < n; i++)
        {
            //Take in k, all the requirements for the prize, and decrement them for 0 indexing
            cin >> k;
            requirements[i].resize(k);

            for (int j = 0; j < k; j++) 
            {
                cin >> requirements[i][j];
                requirements[i][j]--;
            }

            //Take in prize amount in the same index
            cin >> prizes[i];
        }

        //Take in all the sticker amounts
        for (int i = 0; i < m; i++) cin >> stickers[i];

        //Sol holds the solution
        int sol = 0;

        //Iterate through all the prizes again
        for (int i = 0; i < n; i++)
        {
            //Keep track of minimum required stickers since it bounds the amount of prize money
            //Set to really large num for right now
            int minStickers = INT_MAX;

            //Go through all required stickers, update min
            for (int sticker : requirements[i]) minStickers = min(minStickers, stickers[sticker]);

            //Add corresponding prize times minStickers to solution
            sol += minStickers * prizes[i];
        }

        //Output final solution
        cout << sol << endl;
    }
}