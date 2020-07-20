#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize n
    int n;

    //Keep taking in n until it's 0
    while (cin >> n && n)
    {
        //Keep going until n is one digit
        while (n > 9)
        {
            //Digitsum holds sum of digits
            int digitsum = 0;

            //Until n reduces to 0
            while (n)
            {
                //Add the last digit to digitsum and divide by 10
                digitsum += n % 10;
                n /= 10;
            }

            //Set n to the sum of its digits and repeat
            n = digitsum;
        }

        //Output n
        cout << n << endl;
    }
}