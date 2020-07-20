#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Store the 2 names in an array so I can iterate
    string s[2];

    //Keep taking them in with getline since spaces are possible
    while (getline(cin, s[0]) && getline(cin, s[1]))
    {
        //Holds the 2 scores
        double scores[2] = {0};

        //Do it for both of the names
        for (int i = 0; i < 2; i++)
        {
            //Iterate through and add scores for alphanumeric characters
            for (char c : s[i])
            {
                if (c >= 'a' && c <= 'z')
                {
                    scores[i] += c - 'a' + 1;
                }

                else if (c >= 'A' && c <= 'Z')
                {
                    scores[i] += c - 'A' + 1;
                }
            }
        }

        //Now, for both, I will reduce them to one digit
        for (int i = 0; i < 2; i++)
        {
            //Keep going until they're 9 or less
            while (scores[i] > 9)
            {
                //Digitsum holds sum of digits
                double digitsum = 0;

                //Keep adding the ones digit and dividing score by 10
                while (scores[i] != 0) 
                {
                    digitsum += int(scores[i]) % 10;
                    scores[i] /= 10;
                }

                //Replace score with the digit sum
                scores[i] = digitsum;
            }
        }

        //Use printf for formatting, and get the percentage as smaller / larger always
        if (scores[0] > scores[1]) printf("%.2f %\n", scores[1] / scores[0] * 100);
        else printf("%.2f %\n", scores[0] / scores[1] * 100);
    }
}