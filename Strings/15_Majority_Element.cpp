#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int size)
{
    // your code here
    map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[a[i]]++;
        if (m[a[i]] > (size / 2))
            return a[i];
    }
    return -1;
}

int main()
{
    int A[] = {3, 1, 3, 3, 2};
    cout << majorityElement(A, 5);
    return 0;
}