#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int find_median(vector<int> v)
{
    // Code here.
    int len = v.size();
    sort(v.begin(), v.end());
    if (len % 2 == 0)
        return ((v[len / 2] + v[((len) / 2) - 1]) / 2);
    return (v[len / 2]);
}

int main()
{
    vector<int> v1 = {90, 100, 78, 89, 67};
    cout << "Median is " << find_median(v1);
    return 0;
}