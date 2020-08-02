#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize string to take in lines
    string s;

    //Sets which automatically order locations of white kings, queens, rooks, etc
    set<pair<int, char>> wk, wq, wr, wb, wn, wp;

    //Custom comparator for black pieces, since row sorting is backwards
    auto cmp = [](pair<int, char> a, pair<int, char> b) {return (a.first != b.first) ? (a > b) : (a.second < b.second);};
    set<pair<int, char>, decltype(cmp)> bk(cmp), bq(cmp), br(cmp), bb(cmp), bn(cmp), bp(cmp);

    //Take in the useless first line
    getline(cin, s);

    //The rows go from 8 down to 1 as you take them in
    for (int r = 8; r >= 1; r--)
    {
        //Take in a useful line
        getline(cin, s);

        //Iterate through the 8 spaces
        for (int i = 0; i <= 8; i++)
        {
            //Extract the useful character with i*4+2
            switch(s[i*4+2])
            {
                //For each useful character, insert location into right set
                case 'K':
                    //I add 'a' to the space to convert to letter
                    wk.insert({r, char(i+'a')});
                    break;
                case 'k':
                    bk.insert({r, char(i+'a')});
                    break;
                case 'Q':
                    wq.insert({r, char(i+'a')});
                    break;
                case 'q':
                    bq.insert({r, char(i+'a')});
                    break;
                case 'R':
                    wr.insert({r, char(i+'a')});
                    break;
                case 'r':
                    br.insert({r, char(i+'a')});
                    break;
                case 'B':
                    wb.insert({r, char(i+'a')});
                    break;
                case 'b':
                    bb.insert({r, char(i+'a')});
                    break;
                case 'N':
                    wn.insert({r, char(i+'a')});
                    break;
                case 'n':
                    bn.insert({r, char(i+'a')});
                    break;
                case 'P':
                    wp.insert({r, char(i+'a')});
                    break;
                case 'p':
                    bp.insert({r, char(i+'a')});
                    break;
            }
        }

        //Take in the useless line after
        getline(cin, s);
    }

    //Set up vectors to store white and black pieces
    vector<string> white, black;

    //Go in order king, queen, rook... and add the strings we want to the vector
    for (auto x : wk) white.push_back("K" + string(1, x.second) + to_string(x.first));
    for (auto x : wq) white.push_back("Q" + string(1, x.second) + to_string(x.first));
    for (auto x : wr) white.push_back("R" + string(1, x.second) + to_string(x.first));
    for (auto x : wb) white.push_back("B" + string(1, x.second) + to_string(x.first));
    for (auto x : wn) white.push_back("N" + string(1, x.second) + to_string(x.first));
    for (auto x : wp) white.push_back(string(1, x.second) + to_string(x.first));  

    //Same for black pieces 
    for (auto x : bk) black.push_back("K" + string(1, x.second) + to_string(x.first));
    for (auto x : bq) black.push_back("Q" + string(1, x.second) + to_string(x.first));
    for (auto x : br) black.push_back("R" + string(1, x.second) + to_string(x.first));
    for (auto x : bb) black.push_back("B" + string(1, x.second) + to_string(x.first));
    for (auto x : bn) black.push_back("N" + string(1, x.second) + to_string(x.first));
    for (auto x : bp) black.push_back(string(1, x.second) + to_string(x.first));
    
    //Output white before white pieces
    cout << "White: ";

    //If there's at least 1 white piece
    if (white.size())
    {
        //Output the first one, then commas before the rest
        cout << white[0];
        for (int i = 1; i < white.size(); i++) cout << ',' << white[i];
    }

    //Output newline, then same for black
    cout << endl << "Black: ";

    if (black.size())
    {
        cout << black[0];
        for (int i = 1; i < black.size(); i++) cout << ',' << black[i];
    }
}