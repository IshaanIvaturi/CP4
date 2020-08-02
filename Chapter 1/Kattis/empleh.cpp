#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Set up strings for the basic row types (empty board)
    string delimiter = "+---+---+---+---+---+---+---+---+";
    string row1 = "|...|:::|...|:::|...|:::|...|:::|";
    string row2 = "|:::|...|:::|...|:::|...|:::|...|";

    //Represent the board as a vector of these strings
    vector<string> board;

    //Repeat 4 times to make the whole board
    for (int i = 0; i < 4; i++)
    {
        //Add a delimiter, first row, delimiter, second row
        board.push_back(delimiter);
        board.push_back(row1);
        board.push_back(delimiter);
        board.push_back(row2);
    }

    //And final delimiter
    board.push_back(delimiter);

    //I store the piece entries as strings
    //pieces[0] is white pieces, pieces[1] is black
    vector<vector<string>> pieces(2);
    string s;

    //Iterate for white and black
    for (int i = 0; i < 2; i++)
    {
        //Take in white or black string
        getline(cin, s);

        //Take substring for just pieces
        s = s.substr(7);

        //If no pieces, continue
        if (!s.length()) continue;

        //I use a string stream to split by commas
        stringstream ss(s);

        //Keep taking in pieces till next comma, and pushing back to pieces[i]
        while (ss.good())
        {
            getline(ss, s, ',');
            pieces[i].push_back(s);
        }
    }

    //For each white piece
    for (string piece : pieces[0])
    {
        //If pawn, set the proper board space to P
        //Convert from given row to board row with 8-x, then *2+1 from delimiters
        //Same formula as helpme.cpp for the character to string position
        if (piece.length() == 2) board[(8-(piece[1]-'0'))*2+1][(piece[0]-'a')*4+2] = 'P';

        //If not pawn, use piece[2] and piece[1] instead, and set board space to piece[0]
        else board[(8-(piece[2]-'0'))*2+1][(piece[1]-'a')*4+2] = piece[0];
    }

    //Same thing for black, but set piece[0] to lowercase
    for (string piece : pieces[1])
    {
        if (piece.length() == 2) board[(8-(piece[1]-'0'))*2+1][(piece[0]-'a')*4+2] = 'p';

        else board[(8-(piece[2]-'0'))*2+1][(piece[1]-'a')*4+2] = char(tolower(piece[0]));
    }

    //Output the whole board
    for (string row : board) cout << row << endl;
}