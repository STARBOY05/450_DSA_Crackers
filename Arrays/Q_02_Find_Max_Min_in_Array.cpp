#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> p1;

pair<int, int> findMaxMin(int arr[], int n)
{
    sort(arr, arr + n);
    p1.first = arr[0];
    p1.second = arr[n - 1];
    return p1;
}

int main()
{
    int arr[5] = {5, 1, 4, 3, 2};
    p1 = findMaxMin(arr, 5);
    cout << "Min Element: " << p1.first << endl
         << "Max Element: " << p1.second;
    return 0;
}