#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. 
This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
Find the minimum number of jumps to reach the end of the array (starting from the first element). 
If an element is 0, then you cannot move through that element.

Note: Return -1 if you can't reach the end of the array.
*/

int minJumps(int arr[], int n)
{
    int res = 0, curr = 0, temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        temp = max(temp, arr[i] + i);
        if (i == curr)
        {
            res++;
            curr = temp;
        }
    }
    if (curr < n - 1)
        return -1;
    return res;
}

int main()
{
    int nums[5] = {2, 3, 1, 1, 4};
    cout << minJumps(nums, 5);
    return 0;
}