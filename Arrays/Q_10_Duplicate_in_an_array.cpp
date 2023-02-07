/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number
You must solve the problem without modifying the array nums and uses only constant extra space.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    map<int, int> m;
    for (auto i : nums)
        m[i]++;
    for (auto i : m)
    {
        if (i.second > 1)
            return i.first;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    if (findDuplicate(nums) != -1)
    {
        cout << findDuplicate(nums) << " is a duplicate";
    }
    return 0;
}