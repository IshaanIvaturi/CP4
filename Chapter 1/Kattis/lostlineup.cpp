#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n, d, and array size > 100, take in n
    int n, d, arr[105];
    cin >> n;

    //Jimmy is 1, and always first
    arr[0] = 1;

    //Go from 2 to n, i represents friend number
    for (int i = 2; i <= n; i++)
    {
        //Take in d, and its place in array is d+1 since jimmy is first
        cin >> d;
        arr[d+1] = i;
    }

    //Output first n from array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}