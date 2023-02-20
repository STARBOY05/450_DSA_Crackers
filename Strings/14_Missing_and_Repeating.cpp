#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *findTwoElements(int *arr, int n)
{
    // code here
    int *res = new int[2];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > 1)
        {
            res[0] = i.first;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            res[1] = i;
            break;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 3, 3};
    int *res = findTwoElements(arr, 3);
    for (int i=0;i<2;i++)   cout << res[i] << " ";
    return 0;
}