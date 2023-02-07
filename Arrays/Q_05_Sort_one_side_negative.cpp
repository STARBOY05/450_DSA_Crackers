#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveNegEnd(int *arr, int n)
{
    sort(arr, arr + n);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[10] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 10;
    moveNegEnd(arr, n);
    printArr(arr, n);
    return 0;
}