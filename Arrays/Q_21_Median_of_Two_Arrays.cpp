#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<int> c)
{
    int len = c.size();
    sort(c.begin(), c.end());
    if (len % 2 == 0)
        return ((c[len / 2] + c[((len) / 2) - 1]) / 2);
    return (c[len / 2]);
}

int main()
{
    int a[] = {-5, 3, 6, 12, 15}, b[] = {-12, -10, -6, -3, 4, 10};
    int n1 = 5, n2 = 6;
    vector<int> c;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }
    while (i < n1)
    {
        c.push_back(a[i]);
        i++;
    }
    while (j < n2)
    {
        c.push_back(b[j]);
        j++;
    }
    cout << "Median of the two arrays is " << findMedian(c);
}