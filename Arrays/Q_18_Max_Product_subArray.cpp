#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n)
{
    // code here
    long long int maxLeft = arr[0], maxRight = arr[n - 1], prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
        if (arr[i] == 0)
        {
            prod = 1;
            continue;
        }
        maxLeft = max(maxLeft, prod);
    }
    prod = 1;
    for (int i = n - 1; i > -1; i--)
    {
        prod *= arr[i];
        if (arr[i] == 0)
        {
            prod = 1;
            continue;
        }
        maxRight = max(maxRight, prod);
    }
    // if(isZeroPresent) return max(max(maxLeft,maxRight), 0);
    return max(maxLeft, maxRight);
}

int main()
{
    vector<int> arr = {6, -3, -10, 0, 2};
    cout << "Maximum Product in subarray: " << maxProduct(arr, arr.size());
    return 0;
}