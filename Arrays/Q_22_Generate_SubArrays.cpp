#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Recursion - Method1
void printSubArrays1(vector<int> arr, int start, int end)
{
    if (end == arr.size())
        return;
    else if (start > end)
        printSubArrays1(arr, 0, end + 1);
    else
    {
        cout << "[";
        for (int i = start; i < end; i++)
            cout << arr[i] << ", ";
        cout << arr[end] << "]" << endl;
        printSubArrays1(arr, start + 1, end);
    }
    return;
}

// Recursion - Method2
void printSubArrays2(vector<int> &arr, vector<int> subArr, int idx)
{
    // Base Case
    if (idx == arr.size())
    {
        for (auto i : subArr)
            cout << i << " ";
        cout << endl;
        return;
    }
    // Take the element
    subArr.push_back(arr[idx]);
    printSubArrays2(arr, subArr, idx + 1);
    // Don't take the element
    subArr.pop_back();
    printSubArrays2(arr, subArr, idx + 1);
}

int main()
{
    vector<int> arr = {3, 1, 2};
    printSubArrays1(arr, 0, 0);
    vector<int> subArr;
    printSubArrays2(arr, subArr, 0);
    return 0;
}