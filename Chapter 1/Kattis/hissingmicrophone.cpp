#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in string
    string s;
    cin >> s;

    //Iterate through each character except the last
    for (int i = 0; i < s.length()-1; i++)
    {
        //Check if current and next are both s
        if (s[i] == 's' && s[i+1] == 's')
        {
            //Output hiss and exit
            cout << "hiss";
            return 0;
        }
    }

    //If it gets here, output no hiss
    cout << "no hiss";
}