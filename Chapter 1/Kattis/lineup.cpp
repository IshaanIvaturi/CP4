#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in n
    int n;
    cin >> n;

    //Set up vector of size n
    vector<string> arr(n);

    //Take in vector values
    for (int i = 0; i < n; i++) cin >> arr[i];

    //Set a comparison array to arr and sort it (increasing)
    vector<string> comp = arr;
    sort(comp.begin(), comp.end());

    //If they match, output increasing and exit program
    if (arr == comp)
    {
        cout << "INCREASING";
        return 0;
    }

    //Reverse comparison array for decreasing order
    reverse(comp.begin(), comp.end());

    //If decreasing output, otherwise neither
    if (arr == comp) cout << "DECREASING";
    else cout << "NEITHER";
}