#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    // Your code here
    int finMax = INT_MIN;
    int currMax = 0;
    for (int i = 0; i < n; i++)
    {
        currMax += arr[i];
        if (finMax < currMax)
            finMax = currMax;
        if (currMax < 0)
            currMax = 0;
    }
    return finMax;
}

int main()
{
    int arr[5] = {1, 2, 3, -2, 5};
    cout << "Maximum Subarray sum is " << maxSubarraySum(arr, 5);
    return 0;
}