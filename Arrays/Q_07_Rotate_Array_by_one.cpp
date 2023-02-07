// Given an array, rotate the array by one position in clock-wise direction.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int i = n - 1;
    while (i > 0)
    {
        swap(arr[i], arr[i - 1]);
        i--;
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotate(arr, 5);
    printArr(arr, 5);
    return 0;
}