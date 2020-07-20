#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n and g, take in n
    int n, g;
    cin >> n;

    //Iterate n times
    while (n--)
    {
        //Take in g, initialize empty vector of size g
        cin >> g;
        vector<int> gnomes(g);

        //Take in all the gnomes
        for (int i = 0; i < g; i++) cin >> gnomes[i];

        //Iterate through without the beginning or end since king won't be there
        for (int i = 1; i < g-1; i++)
        {
            //Must break the order, and if you remove it the gnomes around it should be in order
            if (gnomes[i] < gnomes[i-1] || gnomes[i] > gnomes[i+1] && gnomes[i-1] < gnomes[i+1])
            {
                //Output the 1 based index, so add 1
                cout << i+1 << endl;

                //And exit to the next group
                break;
            }
        }
    }
}