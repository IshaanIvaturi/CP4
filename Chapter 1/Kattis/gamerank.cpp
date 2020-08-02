#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in string
    string s;
    cin >> s;

    //Set initial rank to 25, stars to 0, consecutive wins to 0
    //req holds star requirement for each rank
    int rank = 25, stars = 0, consec = 0, req[26];

    //Bonus holds if that rank gets a bonus star, canLose holds if losing loses a star
    bool bonus[26] = {0}, canLose[26] = {0};

    //I use for loops to update the requirements per rank
    for (int i = 21; i <= 25; i++) req[i] = 2;
    for (int i = 16; i <= 20; i++) req[i] = 3;
    for (int i = 11; i <= 15; i++) req[i] = 4;
    for (int i = 1; i <= 10; i++) req[i] = 5;

    //Bonus stars from 6 to 25, lose a star from 1 to 20
    for (int i = 6; i <= 25; i++) bonus[i] = true;
    for (int i = 1; i <= 20; i++) canLose[i] = true;

    //For each character in the string
    for (char c : s)
    {
        //If it's a win
        if (c == 'W')
        {
            //Increment stars as well as consecutive
            stars++, consec++;

            //If more than 3 wins and bonus given at rank, increment stars
            if (consec >= 3 && bonus[rank]) stars++;

            //If you now have more stars than your rank requirement...
            if (stars > req[rank]) 
            {
                //If you've reached rank 0 you're automatically legend
                if (rank == 1)
                {
                    cout << "Legend";
                    return 0;
                }

                //Otherwise, decrease stars by current rank requirement and decrement rank
                stars -= req[rank], rank--;
            }
        }

        //If it's a loss
        else
        {
            //Set consec back to 0
            consec = 0;
            
            //If you can lose at that rank
            if (canLose[rank])
            {
                //If it's 20 with 0 stars, do nothing
                //Otherwise...
                if (!(rank == 20 && stars == 0))
                {
                    //If you have 0 stars, increment rank and set stars to that req-1
                    if (stars == 0)
                    {
                        rank++;
                        stars = req[rank]-1;
                    }

                    //Otherwise just decrement stars
                    else stars--;
                }
            }
        }
    }

    //Output rank
    cout << rank;
}
