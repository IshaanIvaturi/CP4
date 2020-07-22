#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> locations; //Stores locations of strings
    set<int> cardsTurned; //Set of all cards seen
    set<string> solved; //All solved strings

    //Initialize variables, solution is 0
    int sol = 0, n, k, c1, c2;
    string p1, p2;

    //Take in n and k
    cin >> n >> k;

    //Iterate k times
    while (k--)
    {
        //take in cards
        cin >> c1 >> c2 >> p1 >> p2;

        //If strings are the same
        if (p1 == p2)
        {
            //If already solved, remove it from final answer
            if (solved.find(p1) != solved.end()) sol--;

            //Otherwise, add it to solved
            else solved.insert(p1);
        }

        //If there's a value stored already
        if (locations[p1])
        {
            //And not solved yet
            if (solved.find(p1) == solved.end())
            {
                //And it's different from the current value
                if (locations[p1] != c1)
                {
                    //Increment solution and insert to solved
                    sol++;
                    solved.insert(p1);
                }
            }
        }

        //If no value stored, store it
        else locations[p1] = c1;
        
        //Same thing for p2
        if (locations[p2])
        {
            if (solved.find(p2) == solved.end())
            {
                if (locations[p2] != c2)
                {
                    sol++;
                    solved.insert(p2);
                }
            }
        }
        else locations[p2] = c2;

        //Insert the turned numbers into set
        cardsTurned.insert(c1);
        cardsTurned.insert(c2);
    }
    
    //If 2 cards unturned
    if (cardsTurned.size() == n-2)
    {
        //If we've solved all but 1 pair, this will be the last pair, so +1
        if (solved.size() == n/2-1) sol++;

        //If we have 2 unsolved pairs instead, we will solve 2 more
        else sol += 2;
    }

    //If there's only one card left, we get one more solve
    else if (cardsTurned.size() == n-1) sol++;

    //If we've found the same number of unsolved cards as unturned cards, we can solve all the unturned
    else if (locations.size() - solved.size()*2 == n - cardsTurned.size()) sol += n - cardsTurned.size();

    //Finally, output sol
    cout << sol;
}