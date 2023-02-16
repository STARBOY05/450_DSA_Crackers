#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e.
they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
Example:

Input: str = “0100110101”
Output: 4
The required substrings are “01”, “0011”, “01” and “01”.
Input: str = “0111100010”
Output: 3

Input: str = “0000000000”
Output: -1
*/

int maxSubStr(string str, int n)
{
    // To store the count of 0s and 1s
    int count0 = 0, count1 = 0;
    // To store the count of maximum
    // substrings str can be divided into
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // Count num of 0s
        if (str[i] == '0')
            count0++;
        else
            count0--;
        if (count0 == 0)
            cnt++;
    }
    if (count0 != 0)
        return -1;
    return cnt;
}

int main()
{
    string st = "000";
    cout << "The maximum count of cons substrs, st can be divided into such that all the substrings are balanced are " << maxSubStr(st, st.size());
    return 0;
}