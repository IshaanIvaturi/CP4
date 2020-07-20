#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize string and take in whole line
    string s;
    getline(cin, s);

    //Only if it matches the 2 dates say yup, otherwise nope
    if (s == "OCT 31" || s == "DEC 25") cout << "yup";
    else cout << "nope";
}