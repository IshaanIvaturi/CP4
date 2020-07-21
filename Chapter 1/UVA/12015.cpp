#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize t and relevance, take in t
    int t, r;
    cin >> t;

    //Initialize string for urls
    string s;

    //Iterate from 1 to t for case numbers
    for (int i = 1; i <= t; i++)
    {
        //Map relevance to a vector of urls
        unordered_map<int, vector<string>> urls;

        //Keep track of the max relevance
        int maxRel = 0;

        //Go through the 10 options
        for (int i = 0; i < 10; i++)
        {
            //Take in the url and relevance, push back map vector for that relevance
            cin >> s >> r;
            urls[r].push_back(s);

            //update max relevance
            maxRel = max(maxRel, r);
        }

        //Output case number
        cout << "Case #" << i << ":" << endl;

        //Go through all the max relevance urls and output
        for (string url : urls[maxRel]) cout << url << endl;
    }
}