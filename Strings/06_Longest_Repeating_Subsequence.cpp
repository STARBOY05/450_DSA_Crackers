#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Longest Repeating Subsequence

/*
Given string str, find the length of the longest repeating subsequence such that it can be found twice in the given string.
The two identified subsequences A and B can use the same ith character
from string str if and only if that ith character has different indices in A and B.
For example, A = "xax" and B = "xax" then the index of first "x" must be different in the original string for A and B.
Input:
str = "axxzxy"
Output: 2
Explanation:
The given array with indexes looks like
a x x z x y
0 1 2 3 4 5

The longest subsequence is "xx".
It appears twice as explained below.

subsequence A
x x
0 1  <-- index of subsequence A
------
1 2  <-- index of str


subsequence B
x x
0 1  <-- index of subsequence B
------
2 4  <-- index of str

We are able to use character 'x'
(at index 2 in str) in both subsequences
as it appears on index 1 in subsequence A
and index 0 in subsequence B.
*/

int main()
{
    string st = "axxxy";
    int n = st.length();
    int dp[n + 1][n + 1];

    // Solution
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // Initialisation
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            // Recurring
            else if (st[i - 1] == st[j - 1] and i != j)
                dp[i][j] = dp[i - 1][j - 1] + 1;
            // Termination
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}