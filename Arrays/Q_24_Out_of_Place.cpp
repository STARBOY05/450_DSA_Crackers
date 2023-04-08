// Given an array of positive and negative numbers,
// arrange them in an alternate fashion such that every positive number is followed by a negative and vice-versa maintaining the order of appearance.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rightrotate(vector<int> arr, int n, int outofplace, int cur)
{
    char tmp = arr[cur];
    for (int i = cur; i > outofplace; i--)
        arr[i] = arr[i - 1];
    arr[outofplace] = tmp;
}

int main()
{
    vector<int> arr = {1, 2, 3, -4, -1, 4};
    int outofplace = -1;

    for (int index = 0; index < arr.size(); index++)
    {
        if (outofplace >= 0)
        {
            if (((arr[index] >= 0) && (arr[outofplace] < 0)) || ((arr[index] < 0) && (arr[outofplace] >= 0)))
            {
                rightrotate(arr, arr.size(), outofplace, index);
                if (index - outofplace >= 2)
                    outofplace = outofplace + 2;
                else
                    outofplace = -1;
            }
            return 0;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}