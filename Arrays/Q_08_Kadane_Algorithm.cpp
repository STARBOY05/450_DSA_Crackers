#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    // Your code here
    long long currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, -2, 5};
    cout << "The maximum sum of a contiguous subarray is " << maxSubarraySum(arr, n);
    return 0;
}