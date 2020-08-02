#include <bits/stdc++.h>

using namespace std;

//Gets all the squares bishop can move to given starting col and row
vector<pair<int, int>> getMoves(int i, int j)
{
    //Store in vector of pii
    vector<pair<int, int>> moves;

    //Go in all 4 directions, further and further
    for (int n = 0; n <= 8; n++)
    {
        //Check if it's in bounds, add move to vector
        if (i+n <= 8 && j+n <= 8) moves.push_back({i+n, j+n});
        if (i+n <= 8 && j-n >= 1) moves.push_back({i+n, j-n});
        if (i-n >= 1 && j+n <= 8) moves.push_back({i-n, j+n});
        if (i-n >= 1 && j-n >= 1) moves.push_back({i-n, j-n});
    }   

    //Return vector of moves
    return moves;
}

int main()
{
    //Initialize variables and take in t
    int t, i1, i2, j1, j2;
    char c1, c2;
    cin >> t;

    //Iterate t times
    while (t--)
    {
        //Take in col characters and row numbers
        //i is col and j is row
        cin >> c1 >> j1 >> c2 >> j2;

        //Convert col to a number between 1 and 8
        i1 = c1 - 'A' + 1, i2 = c2 - 'A' + 1;

        //If the point sums have different parities, different color squares
        if ((i1 + j1) % 2 != (i2 + j2) % 2) cout << "Impossible" << endl;

        //If they're the same point, output 0
        else if (i1 == i2 && j1 == j2) cout << "0 " << c1 << " " << j1 << endl;

        //Otherwise...
        else
        {
            //Get the possible moves from initial position
            vector<pair<int, int>> moves1 = getMoves(i1, j1);

            //If final position is in moves, output 1
            if (find(moves1.begin(), moves1.end(), make_pair(i2, j2)) != moves1.end())
            {
                cout << "1 " << c1 << " " << j1 << " " << c2 << " " << j2 << endl;
            }

            //Otherwise, it must be 2 moves, 2 is minimum moves to get to same color square
            else
            {
                //Get moves from second square
                vector<pair<int, int>> moves2 = getMoves(i2, j2);

                //Iterate through the first set of moves, check if it matches a square in second
                for (pair<int, int> move : moves1)
                {
                    if (find(moves2.begin(), moves2.end(), move) != moves2.end())
                    {
                        //If match is found, output 2 with the match as the intermediate step
                        cout << "2 " << c1 << " " << j1 << " " << char(move.first+'A'-1) << " " << move.second << " " << c2 << " " << j2 << endl;
                        break;
                    }
                }
            }   
        }
    }
}