#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mergeArrays(int arr1[], int n1, int arr2[], int n2, int arr[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }
    // Store remaining elements of first array
    while (i < n1)
        arr[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr[k++] = arr2[j++];
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr1[4] = {1, 3, 4, 5}, arr2[4] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr[n1 + n2] = {0};
    mergeArrays(arr1, n1, arr2, n2, arr);
    cout << "After Merging the arrays: ";
    printArr(arr, n1 + n2);
    return 0;
}