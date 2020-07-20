#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize and take in n and m
    int n, m;
    cin >> n >> m;

    //I think printf is a little nicer here
    //Break it up into positive, 1, -1, negative and output the right statement
    //For 1 and -1, piece is singular so it needs its own case
    if (m-n > 1) printf("Dr. Chaz will have %d pieces of chicken left over!", m-n);
    else if (m-n == 1) printf("Dr. Chaz will have 1 piece of chicken left over!");
    else if (m-n == -1) printf("Dr. Chaz needs 1 more piece of chicken!");
    else printf("Dr. Chaz needs %d more pieces of chicken!", n-m);
}