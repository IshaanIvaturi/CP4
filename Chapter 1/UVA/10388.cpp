#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t, and 3 strings
    int t;
    string s1, s2, s;

    //Use getline for t since I'll have to use it later
    getline(cin, s);
    t = stoi(s);

    //Add an extra getline for the line break
    getline(cin, s);

    //Iterate t times and take in s1 and s2
    while (t-- && getline(cin, s1) && getline(cin, s2))
    {
        //Take in an extra line for the line break
        getline(cin, s);

        //Set strings for Jane and John's face down and face up, s1 and s2 start as face down piles
        string janeDown = s1, johnDown = s2, janeUp = "", johnUp = "";

        //Keeps track if someone won or not
        bool winner = false;

        //Iterate for 1000 flips
        for (int i = 0; i < 1000; i++)
        {
            //Add the front of their down to the front of their up, remove it from down
            janeUp.insert(0, 1, janeDown[0]);
            johnUp.insert(0, 1, johnDown[0]);
            janeDown = janeDown.substr(1);
            johnDown = johnDown.substr(1);

            //If they're the same card...
            if (janeUp[0] == johnUp[0])
            {
                //Use random generator (it's rand() not random() like the problem idek)
                if (rand()/141%2)
                {
                    //Add jane's pile on top of john's if rand > 0
                    johnUp = janeUp + johnUp;

                    //Replace jane's with nothing, and output snap for john with an endl
                    janeUp = "";
                    cout << "Snap! for John: " << johnUp << endl;
                }

                //Opposite, if rand = 0
                else
                {
                    janeUp = johnUp + janeUp;
                    johnUp = "";
                    cout << "Snap! for Jane: " << janeUp << endl;
                }
            }

            //If either of them are out of cards
            if (johnDown == "" && johnUp == "")
            {
                //Output the other wins, set winner to true, and break out
                cout << "Jane wins." << endl;
                winner = true;
                break;
            }
            if (janeDown == "" && janeUp == "")
            {
                cout << "John wins." << endl;
                winner = true;
                break;
            }

            //If either of them run out, reverse their up pile and add it to down pile
            if (johnDown == "")
            {
                reverse(johnUp.begin(), johnUp.end());
                johnDown = johnUp;

                //And erase up pile
                johnUp = "";
            }
            if (janeDown == "")
            {
                reverse(janeUp.begin(), janeUp.end());
                janeDown = janeUp;
                janeUp = "";
            }
        }

        //If there was no winner, output keeps going 
        if (!winner) cout << "Keeps going and going..." << endl;
        
        //If not the last case, put a line
        //I kept getting presentation error since I had an extra endl :(
        if (t) cout << endl;
    }
}