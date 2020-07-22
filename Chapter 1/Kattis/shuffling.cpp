#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n, solution, string and take in n and s
    int n, sol = 0;
    string s;
    cin >> n >> s;

    //This holds the original order
    vector<int> original(n);

    //I fill it with numbers from 1 to n
    for (int i = 0; i < n; i++) original[i] = i+1;

    //Current will be modified and compared to original
    vector<int> current = original;

    //Keep doing...
    do
    {
        //Temp will be used to merge then set current
        vector<int> temp(n);

        //first half pointer, second half pointer, temp pointer
        int i, j, k;

        //If even, second half pointer always starts at n/2
        if (n % 2 == 0) i = 0, j = n/2, k = 0;

        //If odd and s is out, add 1 to second half pointer
        else i = 0, j = n/2 + (s == "out"), k = 0;
        
        //If s is in, start with second half
        if (s == "in")
        {
            //Set first element of temp to first element of second half
            temp[k] = current[j];

            //Advance pointers
            j++;
            k++;
        }

        //Keep going until temp is full
        while (k < n)
        {
            //Take card from first half, advance pointers
            temp[k] = current[i];
            i++;
            k++;

            //If reached the end, break
            if (k == n) break;

            //Take card from second half, advance pointers
            temp[k] = current[j];
            j++;
            k++;
        }

        //Set current to temp, and increment iterations
        current = temp;
        sol++;
    }

    //...until current is back to original
    while (current != original);

    //Output solution
    cout << sol;
}