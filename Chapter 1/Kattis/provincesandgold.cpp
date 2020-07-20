#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize g, s, c and take them in
    int g, s, c;
    cin >> g >> s >> c;

    //Buying power based on values of cards
    int power = g*3 + s*2 + c;

    //Strings for victory card and treasure, victory may not be set
    string victory = "", treasure;

    //Check if the power is enough for each card and set victory
    if (power >= 8) victory = "Province";
    else if (power >= 5) victory = "Duchy";
    else if (power >= 2) victory = "Estate";

    //Same for treasure, but copper is worth 0 so it's default
    if (power >= 6) treasure = "Gold";
    else if (power >= 3) treasure = "Silver";
    else treasure = "Copper";
    
    //If victory has any length, output or, otherwise just treasure
    if (victory.size()) cout << victory << " or " << treasure;
    else cout << treasure;
}