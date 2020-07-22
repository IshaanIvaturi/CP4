#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize variables and array
    int n, t, a[200005];

    //Sol holds the sums, and has to be > int
    //They sometimes overflow int (took me forever to figure out)
    long long sol;

    //Take in n, t, and array a
    cin >> n >> t;
    for (int i = 0; i < n; i++) cin >> a[i];

    //I use a switch statement for the different t's
    switch(t)
    {
        //If t = 1, output 7
        case 1:
            cout << 7;
            break;

        //If t = 2, compare a[0] and a[1] with if statements
        case 2:
            if (a[0] > a[1]) cout << "Bigger";
            else if (a[0] < a[1]) cout << "Smaller";
            else cout << "Equal";
            break;
        
        //Sort the first 3 elements, output the second
        case 3:
            sort(a, a+3);
            cout << a[1];
            break;

        //Add up the elements into sol (the long long) and output
        case 4:
            sol = 0;
            for (int i = 0; i < n; i++) sol += a[i];
            cout << sol;
            break;

        //Check if element is even before adding it
        case 5:
            sol = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0) sol += a[i];
            }
            cout << sol;
            break;

        //For each number mod by 26 and add 'a' and output
        case 6:
            for (int i = 0; i < n; i++) cout << char((a[i] % 26) + 'a');
            break;
        

        //Iterate until you repeat, exit the range, or land on last
        case 7:

            //Keeps track of what was already visited
            vector<bool> visited(n, 0);

            //i starts at 0
            int i = 0;
            
            //Iterate until exit
            while (true)
            {
                //If out of range, output out
                if (i >= n)
                {
                    cout << "Out";
                    return 0;
                }

                //If already visited, it's a cycle
                if (visited[i])
                {
                    cout << "Cyclic";
                    return 0;
                }

                //If last element, we're done
                if (i == n-1)
                {
                    cout << "Done";
                    return 0;
                }

                //Update visited and set i to a[i]
                visited[i] = true;
                i = a[i];
            }
            break;
    }
}