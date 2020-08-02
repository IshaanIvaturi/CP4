#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize int for guess, string for response
    int guess;
    string response;

    //Keep taking in the guess, checking if it's not 0, then taking in response
    //The only thing that matters is the second word, so take response twice
    while (cin >> guess && guess && cin >> response >> response)
    {
        //Initially the minimum possible is 1, and max is 10
        int minNum = 1, maxNum = 10;

        //Keep going until "right on" or just "on" for second word
        while (response != "on")
        {
            //If it's too high, update maxNum to be less than guess
            if (response == "high") maxNum = min(maxNum, guess-1);

            //If it's too low, update minNum to be more than guess
            else minNum = minNum = max(minNum, guess+1);

            //Take in guess and response again until we get right on
            cin >> guess >> response >> response;
        }

        //If the "right on" guess is out of bounds, stan is dishonest, otherwise he may be honest
        if (guess < minNum || guess > maxNum) cout << "Stan is dishonest" << endl;
        else cout << "Stan may be honest" << endl;
    }
}