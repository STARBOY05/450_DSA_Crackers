/*
Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays.
If there are repetitions, then only one occurrence of element should be printed in the union.
Note : Elements are not necessarily distinct.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    // code here
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    return s.size();
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};
    cout << "Total Number of Elements in union: " << doUnion(a, 5, b, 3);
    return 0;
}