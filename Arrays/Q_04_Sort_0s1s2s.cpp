#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)
{
    //   Write your code here
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        //    if 0 then swap element with low and increment low and mid by 1
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low += 1;
            mid += 1;
        }
        //    if 1 then Increment the mid by 1
        else if (arr[mid] == 1)
        {
            mid += 1;
        }
        // If 2 then swap element with high and decrement high by 1
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high -= 1;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[5] = {0, 2, 1, 2, 0};
    int n = 5;
    sort012(arr, n);
    printArr(arr, n);
    return 0;
}