#include <bits/stdc++.h>

using namespace std;

int main()
{
    //Initialize array size 3
    int nums[3];

    //Take in the entries
    cin >> nums[0] >> nums[1] >> nums[2];

    //Sort to get in ascending order
    sort(nums, nums + 3);

    //If the second gap is bigger than the first, insert between second gap, with spacing of first
    if (nums[2] - nums[1] > nums[1] - nums[0]) cout << 2 * nums[1] - nums[0];

    //Same thing other way around
    else if (nums[1] - nums[0] > nums[2] - nums[1]) cout << nums[0] + nums[2] - nums[1];

    //If same spacing, insert after third number, same gap
    else cout << 2 * nums[2] - nums[1];
}