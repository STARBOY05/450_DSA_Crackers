// Kth smallest element
/*
Given an array arr[] and an integer K where K is smaller than size of array,
the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    // code here
    sort(arr, arr + n + 1);
    return arr[k - 1];
}

int main()
{
    int arr[5] = {5, 1, 4, 3, 2};
    int k = 2;
    cout << "kth smallest element is " << kthSmallest(arr, 5, k);
    return 0;
}